/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef wxphp_cfg_guard
#define wxphp_cfg_guard

#include "references.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_cfg_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry *php_wxConfigBase_entry;
void php_wxConfigBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxConfigBase_NAME[];
extern char le_wxConfigBase_name[];

class wxConfigBase_php: public wxConfigBase{
	public:
	
		
	bool DeleteAll();
	bool DeleteEntry(const wxString& key, bool bDeleteGroupIfEmpty=true);
	bool DeleteGroup(const wxString& key);
	bool Flush(bool bCurrentOnly=false);
	bool GetFirstEntry(wxString& str, long& index) const;
	bool GetFirstGroup(wxString& str, long& index) const;
	bool GetNextEntry(wxString& str, long& index) const;
	bool GetNextGroup(wxString& str, long& index) const;
	size_t GetNumberOfEntries(bool bRecursive=false) const;
	size_t GetNumberOfGroups(bool bRecursive=false) const;
	const wxString& GetPath() const;
	bool HasEntry(const wxString& strName) const;
	bool HasGroup(const wxString& strName) const;
	bool RenameEntry(const wxString& oldName, const wxString& newName);
	bool RenameGroup(const wxString& oldName, const wxString& newName);
	void SetPath(const wxString& strPath);
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxConfigBase;
    
static zend_function_entry php_wxConfigBase_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Create, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, DontCreateOnDemand, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Exists, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Get, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, GetAppName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, GetEntryType, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, GetVendorName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, IsExpandingEnvVars, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, IsRecordingDefaults, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Read, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, ReadBool, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, ReadDouble, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, ReadLong, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Set, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, SetExpandEnvVars, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, SetRecordDefaults, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Write, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

extern zend_class_entry *php_wxDisplay_entry;
void php_wxDisplay_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxDisplay_NAME[];
extern char le_wxDisplay_name[];

class wxDisplay_php: public wxDisplay{
	public:
	
	wxDisplay_php(unsigned int index=0):wxDisplay(index){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxDisplay;
    
static zend_function_entry php_wxDisplay_functions[] = {
	PHP_ME(php_wxDisplay, ChangeMode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDisplay, GetClientArea, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDisplay, GetCount, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDisplay, GetCurrentMode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDisplay, GetFromPoint, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDisplay, GetFromWindow, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDisplay, GetGeometry, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDisplay, GetName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDisplay, IsPrimary, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDisplay, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxFileConfig_entry;
void php_wxFileConfig_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxFileConfig_NAME[];
extern char le_wxFileConfig_name[];

class wxFileConfig_php: public wxFileConfig{
	public:
	
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxFileConfig;
    
static zend_function_entry php_wxFileConfig_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Create, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, DontCreateOnDemand, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Exists, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Get, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, GetAppName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, GetEntryType, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, GetVendorName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, IsExpandingEnvVars, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, IsRecordingDefaults, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Read, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, ReadBool, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, ReadDouble, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, ReadLong, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Set, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, SetExpandEnvVars, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, SetRecordDefaults, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxConfigBase, Write, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, DeleteAll, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, DeleteEntry, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, DeleteGroup, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, Flush, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, GetFirstEntry, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, GetFirstGroup, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, GetGlobalFile, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, GetGlobalFileName, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, GetLocalFile, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, GetLocalFileName, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, GetNextEntry, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, GetNextGroup, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, GetNumberOfEntries, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, GetNumberOfGroups, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, GetPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, HasEntry, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, HasGroup, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, RenameEntry, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, RenameGroup, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, SetPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileConfig, SetUmask, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

extern zend_class_entry *php_wxFontMapper_entry;
void php_wxFontMapper_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxFontMapper_NAME[];
extern char le_wxFontMapper_name[];

class wxFontMapper_php: public wxFontMapper{
	public:
	
	wxFontMapper_php():wxFontMapper(){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxFontMapper;
    
static zend_function_entry php_wxFontMapper_functions[] = {
	PHP_ME(php_wxFontMapper, CharsetToEncoding, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, Get, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, GetAltForEncoding, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, GetEncoding, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, GetEncodingDescription, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, GetEncodingFromName, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, GetEncodingName, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, GetSupportedEncodingsCount, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, IsEncodingAvailable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, Set, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, SetConfigPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, SetDialogParent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, SetDialogTitle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontMapper, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};

extern zend_class_entry *php_wxPlatformInfo_entry;
void php_wxPlatformInfo_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxPlatformInfo_NAME[];
extern char le_wxPlatformInfo_name[];

class wxPlatformInfo_php: public wxPlatformInfo{
	public:
	
	wxPlatformInfo_php():wxPlatformInfo(){}
	wxPlatformInfo_php(wxPortId pid, int tkMajor=-1, int tkMinor=-1, wxOperatingSystemId id=wxOS_UNKNOWN, int osMajor=-1, int osMinor=-1, wxArchitecture arch=wxARCH_INVALID, wxEndianness endian=wxENDIAN_INVALID):wxPlatformInfo(pid, tkMajor, tkMinor, id, osMajor, osMinor, arch, endian){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxPlatformInfo;
    
static zend_function_entry php_wxPlatformInfo_functions[] = {
	PHP_ME(php_wxPlatformInfo, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxPlatformInfo, CheckOSVersion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, CheckToolkitVersion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, Get, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetArch, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetArchName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetArchitecture, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetDesktopEnvironment, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetEndianness, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetEndiannessName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetOSMajorVersion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetOSMinorVersion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetOperatingSystemDescription, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetOperatingSystemDirectory, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetOperatingSystemFamilyName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetOperatingSystemId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetOperatingSystemIdName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetPortId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetPortIdName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetPortIdShortName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetToolkitMajorVersion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, GetToolkitMinorVersion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, IsUsingUniversalWidgets, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, SetArchitecture, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, SetDesktopEnvironment, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, SetEndianness, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, SetOSVersion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, SetOperatingSystemDescription, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, SetOperatingSystemId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, SetPortId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPlatformInfo, SetToolkitVersion, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

extern zend_class_entry *php_wxSystemSettings_entry;
void php_wxSystemSettings_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxSystemSettings_NAME[];
extern char le_wxSystemSettings_name[];

class wxSystemSettings_php: public wxSystemSettings{
	public:
	
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxSystemSettings;
    
static zend_function_entry php_wxSystemSettings_functions[] = {
	PHP_ME(php_wxSystemSettings, GetColour, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSystemSettings, GetFont, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSystemSettings, GetMetric, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSystemSettings, GetScreenType, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSystemSettings, HasFeature, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_FE_END
};

extern zend_class_entry *php_wxSystemOptions_entry;
void php_wxSystemOptions_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxSystemOptions_NAME[];
extern char le_wxSystemOptions_name[];

class wxSystemOptions_php: public wxSystemOptions{
	public:
	
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxSystemOptions;
    
static zend_function_entry php_wxSystemOptions_functions[] = {
	PHP_ME(php_wxSystemOptions, GetOption, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSystemOptions, GetOptionInt, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSystemOptions, HasOption, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSystemOptions, IsFalse, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSystemOptions, SetOption, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_FE_END
};

extern zend_class_entry *php_wxVideoMode_entry;
void php_wxVideoMode_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

extern char PHP_wxVideoMode_NAME[];
extern char le_wxVideoMode_name[];

class wxVideoMode_php: public wxVideoMode{
	public:
	
	wxVideoMode_php(int width=0, int height=0, int depth=0, int freq=0):wxVideoMode(width, height, depth, freq){}
		
		
	void InitProperties(){
		properties = new void*[4];

		properties[0] = &w;
		properties[1] = &h;
		properties[2] = &bpp;
		properties[3] = &refresh;
		
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_wxVideoMode;
    
static zend_function_entry php_wxVideoMode_functions[] = {
	PHP_ME(php_wxVideoMode, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxVideoMode, Matches, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVideoMode, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVideoMode, GetWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVideoMode, GetHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVideoMode, GetDepth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVideoMode, __get, wxphp_cfg_get_args, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

#endif //wxphp_cfg_guard

