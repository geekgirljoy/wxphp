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

#ifndef WXPHP_XRC_H_GUARD
#define WXPHP_XRC_H_GUARD

#include "references.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_xrc_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern int le_wxXmlResourceHandler;
extern zend_class_entry *php_wxXmlResourceHandler_entry;
void php_wxXmlResourceHandler_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxXmlResourceHandler_php: public wxXmlResourceHandler{
	public:
	
	wxXmlResourceHandler_php():wxXmlResourceHandler(){}
		
	bool CanHandle(wxXmlNode* node);
	wxObject* DoCreateResource();
		
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
static zend_function_entry php_wxXmlResourceHandler_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResourceHandler, CreateResource, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResourceHandler, SetParentResource, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResourceHandler, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxXmlResource;
extern zend_class_entry *php_wxXmlResource_entry;
void php_wxXmlResource_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxXmlResource_php: public wxXmlResource{
	public:
	
	wxXmlResource_php(const wxString& filemask, int flags=wxXRC_USE_LOCALE, const wxString& domain=wxEmptyString):wxXmlResource(filemask, flags, domain){}
	wxXmlResource_php(int flags=wxXRC_USE_LOCALE, const wxString& domain=wxEmptyString):wxXmlResource(flags, domain){}
		
	void DoReportError(const wxString& xrcFile, const wxXmlNode* position, const wxString& message);
		
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
static zend_function_entry php_wxXmlResource_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, AddHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, AttachUnknownControl, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, ClearHandlers, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, CompareVersion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, FindXRCIDById, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, Get, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, GetDomain, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, GetFlags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, GetResourceNode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, GetVersion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, GetXRCID, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, InitAllHandlers, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, Load, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadAllFiles, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadDialog, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadFile, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadFrame, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadIcon, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadMenu, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadMenuBar, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadObject, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadObjectRecursively, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadPanel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, LoadToolBar, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, Set, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, SetDomain, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, SetFlags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, Unload, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxXmlResource, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

#endif //WXPHP_XRC_H_GUARD
