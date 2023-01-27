/*
 * WARNING: DO NOT CHANGE THIS FILE!
 * This file is automatically generated from createconf
 * under Linux the Jan 20 2023
 */

#ifndef _DUMA_CONFIG_H_
#define _DUMA_CONFIG_H_

/*
 * Configuration of DUMA:
 */
#ifdef DUMA_SO_LIBRARY

#ifdef DUMA_NO_GLOBAL_MALLOC_FREE
#undef DUMA_NO_GLOBAL_MALLOC_FREE
#endif

#ifdef DUMA_EXPLICIT_INIT
#undef DUMA_EXPLICIT_INIT
#endif

#ifdef DUMA_NO_THREAD_SAFETY
#undef DUMA_NO_THREAD_SAFETY
#endif

#ifdef DUMA_SEMAPHORES
#undef DUMA_SEMAPHORES
#endif

#ifdef DUMA_NO_CPP_SUPPORT
#undef DUMA_NO_CPP_SUPPORT
#endif

#ifndef DUMA_NO_LEAKDETECTION
#define DUMA_NO_LEAKDETECTION
#endif

#ifdef DUMA_PREFER_ATEXIT
#undef DUMA_PREFER_ATEXIT
#endif

#ifdef DUMA_PREFER_GETENV
#undef DUMA_PREFER_GETENV
#endif

#ifdef DUMA_OLD_NEW_MACRO
#undef DUMA_OLD_NEW_MACRO
#endif

#ifdef DUMA_OLD_DEL_MACRO
#undef DUMA_OLD_DEL_MACRO
#endif

#ifdef DUMA_NO_STRERROR
#undef DUMA_NO_STRERROR
#endif

#ifdef DUMA_NO_HANG_MSG
#undef DUMA_NO_HANG_MSG
#endif

#elif defined(DUMA_DLL_LIBRARY)

#define DUMA_SKIP_SETUP 1
#define DUMA_NO_GLOBAL_MALLOC_FREE 1
#define DUMA_EXPLICIT_INIT 1
#ifdef DUMA_NO_THREAD_SAFETY
#undef DUMA_NO_THREAD_SAFETY
#endif

#ifdef DUMA_NO_CPP_SUPPORT
#undef DUMA_NO_CPP_SUPPORT
#endif

#ifndef DUMA_NO_LEAKDETECTION
#define DUMA_NO_LEAKDETECTION
#endif

#ifdef DUMA_PREFER_ATEXIT
#undef DUMA_PREFER_ATEXIT
#endif

#ifdef DUMA_PREFER_GETENV
#undef DUMA_PREFER_GETENV
#endif

#ifdef DUMA_OLD_NEW_MACRO
#undef DUMA_OLD_NEW_MACRO
#endif

#ifdef DUMA_OLD_DEL_MACRO
#undef DUMA_OLD_DEL_MACRO
#endif

#ifdef DUMA_NO_HANG_MSG
#undef DUMA_NO_HANG_MSG
#endif

#elif defined(DUMA_DETOURS)

#define DUMA_SKIP_SETUP 1
#define DUMA_NO_GLOBAL_MALLOC_FREE 1
#define DUMA_EXPLICIT_INIT 1
#ifdef DUMA_NO_THREAD_SAFETY
#undef DUMA_NO_THREAD_SAFETY
#endif

#ifdef DUMA_NO_CPP_SUPPORT
#undef DUMA_NO_CPP_SUPPORT
#endif

#ifndef DUMA_NO_LEAKDETECTION
#define DUMA_NO_LEAKDETECTION
#endif

#ifdef DUMA_PREFER_ATEXIT
#undef DUMA_PREFER_ATEXIT
#endif

#ifdef DUMA_PREFER_GETENV
#undef DUMA_PREFER_GETENV
#endif

#ifdef DUMA_OLD_NEW_MACRO
#undef DUMA_OLD_NEW_MACRO
#endif

#ifdef DUMA_OLD_DEL_MACRO
#undef DUMA_OLD_DEL_MACRO
#endif

#ifdef DUMA_NO_HANG_MSG
#undef DUMA_NO_HANG_MSG
#endif

#else

#ifdef DUMA_NO_GLOBAL_MALLOC_FREE
#undef DUMA_NO_GLOBAL_MALLOC_FREE
#endif

#ifdef DUMA_EXPLICIT_INIT
#undef DUMA_EXPLICIT_INIT
#endif

#ifdef DUMA_NO_THREAD_SAFETY
#undef DUMA_NO_THREAD_SAFETY
#endif

#ifdef DUMA_NO_CPP_SUPPORT
#undef DUMA_NO_CPP_SUPPORT
#endif

#ifdef DUMA_NO_LEAKDETECTION
#undef DUMA_NO_LEAKDETECTION
#endif

#ifdef DUMA_PREFER_ATEXIT
#undef DUMA_PREFER_ATEXIT
#endif

#ifdef DUMA_PREFER_GETENV
#undef DUMA_PREFER_GETENV
#endif

#ifdef DUMA_OLD_NEW_MACRO
#undef DUMA_OLD_NEW_MACRO
#endif

#ifdef DUMA_OLD_DEL_MACRO
#undef DUMA_OLD_DEL_MACRO
#endif

#ifdef DUMA_NO_STRERROR
#undef DUMA_NO_STRERROR
#endif

#ifdef DUMA_NO_HANG_MSG
#undef DUMA_NO_HANG_MSG
#endif

#endif


/*
 * Number of bytes per virtual-memory page, as returned by Page_Size().
 */
#define DUMA_PAGE_SIZE 4096

/*
 * Minimum required alignment by CPU.
 */
#define DUMA_MIN_ALIGNMENT 1

/*
 * Build environment supports the '__attribute ((constructor))'?
 */
#define DUMA_GNU_INIT_ATTR 1

/*
 * An integer type with same size as 'void *'
 */
typedef unsigned long int DUMA_ADDR;

/*
 * An integer type with same size as 'size_t'
 */
typedef unsigned long int DUMA_SIZE;

/*
 * Default behaviour on malloc(0).
 */
#define DUMA_DEFAULT_MALLOC_0_STRATEGY 3

#endif /* _DUMA_CONFIG_H_ */
