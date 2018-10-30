PHP_ARG_ENABLE(ldapi,
  [Whether to enable the "ldapi" extension],
  [  --enable-ldapi        Enable "ldapi" extension support])

if test $PHP_LDAPI != "no"; then
  PHP_SUBST(LDAPI_SHARED_LIBADD)
  PHP_NEW_EXTENSION(ldapi, ldapi.c, $ext_shared)
fi
