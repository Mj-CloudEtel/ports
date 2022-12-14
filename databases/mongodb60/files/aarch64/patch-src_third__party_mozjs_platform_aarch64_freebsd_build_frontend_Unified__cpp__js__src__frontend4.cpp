--- src/third_party/mozjs/platform/aarch64/freebsd/build/frontend/Unified_cpp_js_src_frontend4.cpp.orig	2022-09-08 14:42:13 UTC
+++ src/third_party/mozjs/platform/aarch64/freebsd/build/frontend/Unified_cpp_js_src_frontend4.cpp
@@ -0,0 +1,55 @@
+#define MOZ_UNIFIED_BUILD
+#include "frontend/ObjLiteral.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "frontend/ObjLiteral.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "frontend/ObjLiteral.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "frontend/ObjectEmitter.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "frontend/ObjectEmitter.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "frontend/ObjectEmitter.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "frontend/OptionalEmitter.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "frontend/OptionalEmitter.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "frontend/OptionalEmitter.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "frontend/ParseContext.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "frontend/ParseContext.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "frontend/ParseContext.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "frontend/ParseNode.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "frontend/ParseNode.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "frontend/ParseNode.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "frontend/ParseNodeVerify.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "frontend/ParseNodeVerify.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "frontend/ParseNodeVerify.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
\ No newline at end of file
