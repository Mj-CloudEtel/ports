--- relayd/ssl.c.orig	2022-03-23 10:46:57 UTC
+++ relayd/ssl.c
@@ -219,7 +219,8 @@ ssl_cleanup(struct ctl_tcp_event *cte)
 	close(cte->s);
 	if (cte->ssl != NULL) {
 		SSL_shutdown(cte->ssl);
-		SSL_clear(cte->ssl);
+		SSL_free(cte->ssl);
+		cte->ssl = NULL;
 	}
 	if (cte->buf != NULL) {
 		ibuf_free(cte->buf);
