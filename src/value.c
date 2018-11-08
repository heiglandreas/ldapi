/*
 * Copyright Andreas Heigl <andreas@heigl.org>
 *
 * This file is published under the MIT License. For more details see the file LICENSE.md
 */

#include "../php_ldapi.h"


#define PHP_LDAPI_VALUE_CLASS_NAME "Value"

static zend_class_entry *php_ldapi_value_class_entry;

/**
 * @param mixed value
 *
 * @return void
 */
PHP_METHOD(ldapi_value_init, init) {
	php_printf("init");
}

const zend_function_entry php_ldapi_value_class_functions[] = {
	PHP_ME(ldapi_value_init, init, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

