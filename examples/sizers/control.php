<?php

/**
 * This frame acts as a controller of the main demonstration window
 */
class ControlFrame extends wxFrame
{
    // Not sure what good practice is here - there's lots of predefined ID codes in
    // wxWidgets, though it's probably not all important to avoid them.
    const ID_DEMO =  10000;
    const ID_HORIZ = 10001;
    const ID_VERT = 10002;

    // Callbacks for various events
    protected $changeDemohandler;

    // Controls that need to be referred to class-wide
    protected $choiceCtrl;
    protected $helpCtrl;
    protected $horizCtrl;
    protected $vertCtrl;

    // Misc class properties
    protected $helpStrings;
    protected $demoIndex;

    public function __construct(array $demoNames, array $helpStrings, $parent = null)
    {
        // The "dialog style" means that the window deliberately cannot be resized
        parent::__construct(
            $parent,
            wxID_TOP,
            "Sizer controller",
            wxDefaultPosition,
            new wxSize(350, 200),
            wxDEFAULT_DIALOG_STYLE
        );
        $this->SetPosition(new wxPoint(100, 100));

        // Create the main drop-down and help controls
        $this->choiceCtrl =
            new wxChoice($this, self::ID_DEMO, wxDefaultPosition, new wxSize(330, 29), $demoNames);
        $this->helpCtrl =
            new wxStaticText($this, wxID_ANY, '', wxDefaultPosition, new wxSize(330, 100));

        $sizer = new wxBoxSizer(wxVERTICAL);
        $sizer->Add($this->choiceCtrl, 0, wxALL, 8);
        $sizer->Add($this->helpCtrl, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);
        $this->initAlignControls($sizer);
        $this->SetSizer($sizer);

        // Save the help strings in this class too
        $this->helpStrings = $helpStrings;

        $this->Connect(wxEVT_CHOICE, [$this, "controlChangeEvent"]);
    }

    /**
     * Sets up the alignment controls
     *
     * @todo Add another label/widget for vertical alignment
     *
     * @param wxSizer $sizer
     */
    protected function initAlignControls(wxSizer $sizer)
    {
        $hSizer = new wxBoxSizer(wxHORIZONTAL);
        $this->horizCtrl = $this->initAlignmentControl(
            $hSizer, 'H align:',
            self::ID_HORIZ, ["Left", "Centre", "Right"]
        );
        $this->vertCtrl = $this->initAlignmentControl(
            $hSizer, 'V align:',
            self::ID_VERT, ["Top", "Centre", "Bottom"]
        );

        // Add the child sizer to the main one (going down)
        $sizer->Add($hSizer, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);
    }

    protected function initAlignmentControl(wxSizer $hSizer, $label, $choiceId, $choices)
    {
        $labelCtrl =
            new wxStaticText($this, wxID_ANY, $label, wxDefaultPosition, new wxSize(70, 18));
        $choiceCtrl =
            new wxChoice($this, $choiceId, wxDefaultPosition, new wxSize(80, 29), $choices);

        // Let's add left-spacing in the sizer if there's already controls in here
        $leftSpace = $hSizer->GetItemCount() ? 16 : 0;

        // Add the controls to the child sizer (going across)
        $hSizer->Add($labelCtrl, 0, wxALIGN_CENTER_VERTICAL + wxLEFT, $leftSpace);
        $hSizer->Add($choiceCtrl);

        return $choiceCtrl;
    }

    /**
     * Receive a WX event from the choice control
     *
     * @param wxCommandEvent $event
     */
    public function controlChangeEvent(wxCommandEvent $event)
    {
        if ($event->GetId() === self::ID_DEMO)
        {
            $this->changeDemoEvent($event->GetInt());
        }
        elseif ($event->GetId() === self::ID_HORIZ)
        {
            $this->changeHorizEvent($event->GetInt());
        }
    }

    /**
     * Set the menu choice and call the attached handler
     *
     * @param integer $index
     */
    public function setDemoChoice($index)
    {
        $this->setHelp($index);
        $this->choiceCtrl->SetSelection($index);
        $this->changeDemoEvent($index);
    }

    /**
     * Handles a request to change the demo
     *
     * @param integer $index
     */
    protected function changeDemoEvent($index)
    {
        $this->setHelp($index);

        $func = $this->changeDemoHandler;
        $func($index, $this->getSizerFlags());

        $this->demoIndex = $index;
    }

    /**
     * Handles a request to change the horizontal justification options
     *
     * @param integer $index
     */
    protected function changeHorizEvent($index)
    {
        $this->changeDemoEvent($this->demoIndex);
    }

    protected function setHelp($index)
    {
        $this->helpCtrl->SetLabel($this->helpStrings[$index]);

        // The wrapping can change the control size, so it's worth asking the window
        // to re-layout its controls
        $this->helpCtrl->Wrap(330);
        $this->Layout();
    }

    public function setChangeDemoHandler($changeDemoHandler)
    {
        $this->changeDemoHandler = $changeDemoHandler;
    }

    protected function getSizerFlags()
    {
        $flags = 0;

        $horiz = $this->horizCtrl->GetSelection();
        switch ($horiz)
        {
            case 0:
                $flags += wxALIGN_LEFT;
                break;
            case 1:
                $flags += wxALIGN_CENTER_HORIZONTAL;
                break;
            case 2:
                $flags += wxALIGN_RIGHT;
                break;
        }

        return $flags;
    }
}
