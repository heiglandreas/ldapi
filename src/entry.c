/*
 * Copyright Andreas Heigl <andreas@heigl.org>
 *
 * This file is published under the MIT License. For more details see the file LICENSE.md
 */

#include "../php_ldapi.h"


#define PHP_LDAPI_ENTRY_CLASS_NAME "Entry"

static zend_class_entry *php_ldapi_entry_class_entry;

/**
 * @param Dn dn
 *
 * @return bool
 */
PHP_METHOD(ldapi_entry_init, init) {
	php_printf("init");
}

/**
 * @param Attribute attribute
 *
 * @return void
 */
PHP_METHOD(ldapi_entry_setAttribute, setAttribute) {
	php_printf("setAttribute");
}

/**
 * @param string key
 *
 * @return Attribute
 */
PHP_METHOD(ldapi_entry_getAttribute, getAttribute) {
	php_printf("getAttribute");
}

/**
 * @param AttributeList attributes
 *
 * @return void
 */
PHP_METHOD(ldapi_entry_setAttributes, setAttributes) {
	php_printf("setAttributes");
}

/**
 * @return AttributeList
 */
PHP_METHOD(ldapi_entry_getAttributes, getAttributes) {
	php_printf("getAttributes");
}

/**
 * @param string attributeKey
 *
 * @return void
 */
PHP_METHOD(ldapi_entry_removeAttribute, removeAttribute){
	php_printf("removeAttribute");
}

const zend_function_entry php_ldapi_entry_class_functions[] = {
	PHP_ME(ldapi_entry_init, init, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_entry_setAttribute, setAttribute, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_entry_getAttribute, getAttribute, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_entry_removeAttribute, removeAttribute, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_entry_setAttributes, setAttributes, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_entry_getAttributes, getAttributes, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

