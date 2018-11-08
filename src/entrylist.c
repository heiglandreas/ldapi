/*
 * Copyright Andreas Heigl <andreas@heigl.org>
 *
 * This file is published under the MIT License. For more details see the file LICENSE.md
 */

#include "../php_ldapi.h"


#define PHP_LDAPI_ENTRYLIST_CLASS_NAME "EntryList"

static zend_class_entry *php_ldapi_entrylist_class_entry;

/**
 * @return void
 */
PHP_METHOD(ldapi_entrylist_init, init) {
	php_printf("init");
}

/**
 * @param Entry entry
 *
 * @return void
 */
PHP_METHOD(ldapi_entrylist_add, add) {
	php_printf("add");
}

/**
 * @return self
 */
PHP_METHOD(ldapi_entrylist_remove, remove) {
	php_printf("remove");
}

const zend_function_entry php_ldapi_entrylist_class_functions[] = {
	PHP_ME(ldapi_entrylist_init, init, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_entrylist_add, add, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ldapi_entrylist_remove, remove, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

