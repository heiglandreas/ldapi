/*
 * Copyright Andreas Heigl <andreas@heigl.org>
 *
 * This file is published under the MIT License. For more details see the file LICENSE.md
 */

#include "../php_ldapi.h"


#define PHP_LDAPI_OPTION_CLASS_NAME "Option"

static zend_class_entry *php_ldapi_option_class_entry;

/**
 * @param string value
 * @param mixed value
 *
 * @return void
 */
PHP_METHOD(ldapi_option_init, init) {
	php_printf("init");
}

/**
 * @return string
 */
PHP_METHOD(ldapi_option_getName, getName) {
	php_printf("getName");
}

/**
 * @return mixed
 */
PHP_METHOD(ldapi_option_getValue, getValue) {
	php_printf("getValue");
}

const zend_function_entry php_ldapi_option_class_functions[] = {
	PHP_ME(ldapi_option_init, init, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_option_getName, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_option_getValue, getValue, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

