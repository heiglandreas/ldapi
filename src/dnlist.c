/*
 * Copyright Andreas Heigl <andreas@heigl.org>
 *
 * This file is published under the MIT License. For more details see the file LICENSE.md
 */

#include "../php_ldapi.h"


#define PHP_LDAPI_DNLIST_CLASS_NAME "DnList"

static zend_class_entry *php_ldapi_dnlist_class_entry;

/**
 * @param string dnOrUsername
 * @param string password
 *
 * @return bool
 */
PHP_METHOD(ldapi_dnlist_init, init) {
	php_printf("init");
}

/**
 * @param Dn dn
 *
 * @return self
 */
PHP_METHOD(ldapi_dnlist_add, add) {
	php_printf("add");
}

/**
 * @param Dn dn
 *
 * @return self
 */
PHP_METHOD(ldapi_dnlist_remove, remove) {
	php_printf("remove");
}

const zend_function_entry php_ldapi_dnlist_class_functions[] = {
	PHP_ME(ldapi_dnlist_init, init, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_dnlist_add, add, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_dnlist_remove, remove, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

