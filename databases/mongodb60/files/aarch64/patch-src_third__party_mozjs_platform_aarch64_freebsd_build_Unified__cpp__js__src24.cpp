--- src/third_party/mozjs/platform/aarch64/freebsd/build/Unified_cpp_js_src24.cpp.orig	2022-09-08 14:42:13 UTC
+++ src/third_party/mozjs/platform/aarch64/freebsd/build/Unified_cpp_js_src24.cpp
@@ -0,0 +1,55 @@
+#define MOZ_UNIFIED_BUILD
+#include "vm/SharedArrayObject.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/SharedArrayObject.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/SharedArrayObject.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/SharedImmutableStringsCache.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/SharedImmutableStringsCache.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/SharedImmutableStringsCache.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/SourceHook.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/SourceHook.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/SourceHook.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/Stack.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/Stack.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/Stack.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/StencilObject.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/StencilObject.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/StencilObject.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/StringType.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/StringType.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/StringType.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
\ No newline at end of file
