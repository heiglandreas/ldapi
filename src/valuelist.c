/*
 * Copyright Andreas Heigl <andreas@heigl.org>
 *
 * This file is published under the MIT License. For more details see the file LICENSE.md
 */

#include "../php_ldapi.h"


#define PHP_LDAPI_VALUELIST_CLASS_NAME "ValueList"

static zend_class_entry *php_ldapi_valuelist_class_entry;

/**
 * @param Value value
 *
 * @return self
 */
PHP_METHOD(ldapi_valuelist_add, add) {
	php_printf("add");
}

/**
 * @param Value value
 *
 * @return self
 */
PHP_METHOD(ldapi_valuelist_remove, remove) {
	php_printf("remove");
}

const zend_function_entry php_ldapi_valuelist_class_functions[] = {
	PHP_ME(ldapi_valuelist_add, add, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_valuelist_remove, remove, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

