--- include/openssl/opensslv.h.orig	2022-03-13 17:36:37 UTC
+++ include/openssl/opensslv.h
@@ -8,7 +8,11 @@
 #define LIBRESSL_VERSION_TEXT   "LibreSSL 3.3.6"
 
 /* These will never change */
+#ifndef OPENSSL_IS_LIBRESSL
 #define OPENSSL_VERSION_NUMBER	0x20000000L
+#else
+#define OPENSSL_VERSION_NUMBER	0x1000107fL
+#endif /* OPENSSL_IS_LIBRESSL */
 #define OPENSSL_VERSION_TEXT	LIBRESSL_VERSION_TEXT
 #define OPENSSL_VERSION_PTEXT	" part of " OPENSSL_VERSION_TEXT
 
