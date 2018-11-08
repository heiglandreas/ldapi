/*
 * Copyright Andreas Heigl <andreas@heigl.org>
 *
 * This file is published under the MIT License. For more details see the file LICENSE.md
 */

#include "../php_ldapi.h"


#define PHP_LDAPI_LDAP_CLASS_NAME "Ldap"

static zend_class_entry *php_ldapi_ldap_class_entry;

/**
 * @param string dnOrUsername
 * @param string password
 *
 * @return bool
 */
PHP_METHOD(ldapi_ldap_bind, bind) {
	php_printf("bind");
}

/**
 * @param Search searchObject
 *
 * @return EntryList
 */
PHP_METHOD(ldapi_ldap_search, search) {
	php_printf("search");
}

/**
 * @return void
 */
PHP_METHOD(ldapi_ldap_unbind, unbind) {
	php_printf("unbind");
}

/**
 * @param EntryList entries
 *
 * @return void
 */
PHP_METHOD(ldapi_ldap_add, add) {
	php_printf("add");
}

/**
 * @param EntryList entries
 *
 * @return void
 */
PHP_METHOD(ldapi_ldap_modify, modify) {
	php_printf("modify");
}

/**
 * @param DnList
 *
 * @return void
 */
PHP_METHOD(ldapi_ldap_delete, delete) {
	php_printf("delete");
}

/**
 * @param string optionKey
 * @param Option optionValue
 *
 * @return void
 */
PHP_METHOD(ldapi_ldap_setOption, setOption) {
	php_printf("setOption");
}

/**
 * @param string optionKey
 *
 * @return Option
 */
PHP_METHOD(ldapi_ldap_getOption, getOption) {
	php_printf("getOption");
}

const zend_function_entry php_ldapi_ldap_class_functions[] = {
	PHP_ME(ldapi_ldap_bind, bind, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_ldap_search, search, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_ldap_unbind, unbind, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_ldap_add, add, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_ldap_modify, modify, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_ldap_delete, delete, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

