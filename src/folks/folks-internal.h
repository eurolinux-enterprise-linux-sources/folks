/* folks-internal.h generated by valac 0.20.1.30-1b1d, the Vala compiler, do not modify */


#ifndef __FOLKS_INTERNAL_H__
#define __FOLKS_INTERNAL_H__

#include <glib.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>

G_BEGIN_DECLS



gboolean folks_internal_equal_sets (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeSet* a, GeeSet* b);
void folks_internal_profiling_point (const gchar* format, ...);
void folks_internal_profiling_start (const gchar* format, ...);
void folks_internal_profiling_end (const gchar* format, ...);


G_END_DECLS

#endif
