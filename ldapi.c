#include "php_ldapi.h"

#include "src/ldap.c"
#include "src/search.c"
#include "src/option.c"
#include "src/entrylist.c"
#include "src/entry.c"
#include "src/dnlist.c"
#include "src/dn.c"
#include "src/attribute.c"
#include "src/attributelist.c"
#include "src/value.c"
#include "src/valuelist.c"




PHP_MINIT_FUNCTION(ldapi)
{
	zend_class_entry ce;
	INIT_NS_CLASS_ENTRY(
		ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_LDAP_CLASS_NAME, php_ldapi_ldap_class_functions
	);
	php_ldapi_ldap_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
	INIT_NS_CLASS_ENTRY(
			ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_SEARCH_CLASS_NAME, php_ldapi_search_class_functions
	)
	php_ldapi_search_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
	INIT_NS_CLASS_ENTRY(
			ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_OPTION_CLASS_NAME, php_ldapi_option_class_functions
	)
	php_ldapi_option_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
	INIT_NS_CLASS_ENTRY(
			ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_ENTRYLIST_CLASS_NAME, php_ldapi_entrylist_class_functions
	)
	php_ldapi_entrylist_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
	INIT_NS_CLASS_ENTRY(
			ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_ENTRY_CLASS_NAME, php_ldapi_entry_class_functions
	)
	php_ldapi_entry_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
	INIT_NS_CLASS_ENTRY(
			ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_DNLIST_CLASS_NAME, php_ldapi_dnlist_class_functions
	)
	php_ldapi_dnlist_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
	INIT_NS_CLASS_ENTRY(
			ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_DN_CLASS_NAME, php_ldapi_dn_class_functions
	)
	php_ldapi_dn_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
	INIT_NS_CLASS_ENTRY(
			ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_ATTRIBUTE_CLASS_NAME, php_ldapi_attribute_class_functions
	)
	php_ldapi_attribute_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
	INIT_NS_CLASS_ENTRY(
			ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_ATTRIBUTELIST_CLASS_NAME, php_ldapi_attributelist_class_functions
	)
	php_ldapi_attributelist_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
	INIT_NS_CLASS_ENTRY(
			ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_VALUE_CLASS_NAME, php_ldapi_value_class_functions
	)
	php_ldapi_value_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
	INIT_NS_CLASS_ENTRY(
			ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_VALUELIST_CLASS_NAME, php_ldapi_valuelist_class_functions
	)
	php_ldapi_valuelist_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
}

zend_module_entry ldapi_module_entry = {
	STANDARD_MODULE_HEADER,
	PHP_LDAPI_EXT_NAME,
	NULL, /* Functions */
	PHP_MINIT(ldapi), /* MINIT */
	NULL, /* MSHUTDOWN */
	NULL, /* RINIT */
	NULL, /* RSHUTDOWN */
	NULL, /* MINFO */
	PHP_LDAPI_EXT_VERSION,
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_LDAPI
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(ldapi)
#endif
