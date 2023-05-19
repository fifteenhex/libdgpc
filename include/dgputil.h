//SPDX-License-Identifier: GPL-2.0-or-later
/*
 *
 */
#ifndef __DGPUTIL_H__
#define __DGPUTIL_H__

/* Very basic level based logging .. */

#define LOGLEVEL_ERR	0
#define LOGLEVEL_INFO	1
#define LOGLEVEL_DBG	2

typedef int(*log_cb)(int level, const char *tag, const char *restrict format,...);

/* Very shitty min/max */

#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))

#define array_size(a) (sizeof(a) / sizeof(a[0]))

/*
 * Concept copied from the kernel,.. encode error value
 * into a pointer
 */

#define MAX_ERRNO 4056
#define is_err_ptr(p)	((unsigned long)(void *)(p) >= (unsigned long)-MAX_ERRNO)
#define err_ptr(e)	((void *) ((long) e))
#define ptr_err(p)	((int)((long) p))

#define bit(_b) (1 << _b)

#define flex_array_sz(_a, _fa, _e) \
	sizeof(*_a) + (sizeof(_a->_fa[0]) * _e)

#endif
