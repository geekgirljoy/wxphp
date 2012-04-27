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

#ifndef WXPHP_HELP_H_GUARD
#define WXPHP_HELP_H_GUARD

#include "references.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_help_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern int le_wxToolTip;
extern zend_class_entry *php_wxToolTip_entry;
void php_wxToolTip_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxToolTip_php: public wxToolTip{
	public:
	
	wxToolTip_php(const wxString& tip):wxToolTip(tip){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxToolTip_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxToolTip, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxToolTip, SetTip, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxToolTip, SetReshow, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxToolTip, SetDelay, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxToolTip, SetAutoPop, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxToolTip, GetWindow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxToolTip, GetTip, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxToolTip, Enable, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

#endif //WXPHP_HELP_H_GUARD
