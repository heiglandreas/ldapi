/*
 * Copyright Andreas Heigl <andreas@heigl.org>
 *
 * This file is published under the MIT License. For more details see the file LICENSE.md
 */

#include "../php_ldapi.h"


#define PHP_LDAPI_ATTRIBUTELIST_CLASS_NAME "AttributeList"

static zend_class_entry *php_ldapi_attributelist_class_entry;

/**
 * @param Attribute attribute
 *
 * @return self
 */
PHP_METHOD(ldapi_attributelist_add, add) {
	php_printf("add");
}

/**
 * @param Attribute attribute
 *
 * @return self
 */
PHP_METHOD(ldapi_attributelist_remove, remove) {
	php_printf("remove");
}

const zend_function_entry php_ldapi_attributelist_class_functions[] = {
	PHP_ME(ldapi_attributelist_add, add, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_attributelist_remove, remove, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

