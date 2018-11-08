/*
 * Copyright Andreas Heigl <andreas@heigl.org>
 *
 * This file is published under the MIT License. For more details see the file LICENSE.md
 */

#include "../php_ldapi.h"


#define PHP_LDAPI_ATTRIBUTE_CLASS_NAME "Attribute"

static zend_class_entry *php_ldapi_attribute_class_entry;

/**
 * @param string attributename
 *
 * @return bool
 */
PHP_METHOD(ldapi_attribute_init, init) {
	php_printf("init");
}

const zend_function_entry php_ldapi_attribute_class_functions[] = {
	PHP_ME(ldapi_attribute_init, init, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

