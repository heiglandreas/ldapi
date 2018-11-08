/*
 * Copyright Andreas Heigl <andreas@heigl.org>
 *
 * This file is published under the MIT License. For more details see the file LICENSE.md
 */

#include "../php_ldapi.h"


#define PHP_LDAPI_SEARCH_CLASS_NAME "Search"

static zend_class_entry *php_ldapi_search_class_entry;

/**
 * @param Dn     baseDn
 * @param string filter
 * @param array  attributes
 *
 * @return void
 */
PHP_METHOD(ldapi_search_init, init) {
	php_printf("init");
}

const zend_function_entry php_ldapi_search_class_functions[] = {
	PHP_ME(ldapi_search_init, init, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

