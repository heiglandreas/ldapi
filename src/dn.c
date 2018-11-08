/*
 * Copyright Andreas Heigl <andreas@heigl.org>
 *
 * This file is published under the MIT License. For more details see the file LICENSE.md
 */

#include "../php_ldapi.h"


#define PHP_LDAPI_DN_CLASS_NAME "Dn"

static zend_class_entry *php_ldapi_dn_class_entry;

/**
 * @param string dnOrUsername
 * @param string password
 *
 * @return bool
 */
PHP_METHOD(ldapi_dn_init, init) {
	php_printf("init");
}

const zend_function_entry php_ldapi_dn_class_functions[] = {
	PHP_ME(ldapi_dn_init, init, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

