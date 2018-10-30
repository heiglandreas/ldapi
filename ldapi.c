#include "php_ldapi.h"

#define PHP_LDAPI_CLASS_TEST_NAME "LDAP"

static zend_class_entry *php_ldapi_test_class_entry;

/*
 1. Implement the method
*/
PHP_METHOD(ldapi_Test, hello) {
	php_printf("Hello World!");
}

/*
 2. register it in the function list for the class
*/
const zend_function_entry php_ldapi_test_class_functions[] = {
	PHP_ME(ldapi_Test, hello, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

PHP_MINIT_FUNCTION(ldapi)
{
	zend_class_entry ce;
	INIT_NS_CLASS_ENTRY(
		ce, PHP_LDAPI_EXT_NS, PHP_LDAPI_CLASS_TEST_NAME, php_ldapi_test_class_functions
	);
	php_ldapi_test_class_entry = zend_register_internal_class(&ce TSRMLS_CC);
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
