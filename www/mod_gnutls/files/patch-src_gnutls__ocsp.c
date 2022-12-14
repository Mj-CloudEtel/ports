--- src/gnutls_ocsp.c.orig	2021-07-29 19:47:39 UTC
+++ src/gnutls_ocsp.c
@@ -446,7 +446,8 @@ static gnutls_datum_t mgs_get_cert_fingerprint(apr_poo
     /* Safe integer type conversion: The types of fingerprint.size
      * (unsigned int) and fplen (size_t) may have different
      * lengths. */
-#if defined(__GNUC__) && __GNUC__ < 5 && !defined(__clang__)
+#if defined(__GNUC__) && __GNUC__ < 5 && \
+    !(defined(__clang__) && __has_builtin(__builtin_add_overflow))
     if (__builtin_expect(fplen <= UINT_MAX, 1))
     {
         fingerprint.size = (unsigned int) fplen;
@@ -603,7 +604,8 @@ static apr_status_t do_ocsp_request(apr_pool_t *p, ser
     }
 
     /* With the length restriction this really should not overflow. */
-#if defined(__GNUC__) && __GNUC__ < 5 && !defined(__clang__)
+#if defined(__GNUC__) && __GNUC__ < 5 && \
+    !(defined(__clang__) && __has_builtin(__builtin_add_overflow))
     if (__builtin_expect(len > UINT_MAX, 0))
 #else
     if (__builtin_add_overflow(len, 0, &response->size))
@@ -614,7 +616,8 @@ static apr_status_t do_ocsp_request(apr_pool_t *p, ser
     }
     else
     {
-#if defined(__GNUC__) && __GNUC__ < 5 && !defined(__clang__)
+#if defined(__GNUC__) && __GNUC__ < 5 && \
+    !(defined(__clang__) && __has_builtin(__builtin_add_overflow))
         response->size = (unsigned int) len;
 #endif
         response->data = apr_pmemdup(p, buf, len);
