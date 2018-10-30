#ifndef PHP_LDAPI_H
#define PHP_LDAPI_H

#define PHP_LDAPI_EXT_NAME  "ldapi"
#define PHP_LDAPI_EXT_VERSION  "0.0.1"
#define PHP_LDAPI_EXT_NS "Ldapi"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif /* HAVE_CONFIG_H */

#include "php.h"

#ifdef ZTS
#include "TSRM.h"
#endif

#if defined(ZTS) && defined(COMPILE_DL_LDAPI)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif /* PHP_LDAPI_H */
