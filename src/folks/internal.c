/* internal.c generated by valac 0.20.1.30-1b1d, the Vala compiler
 * generated from internal.vala, do not modify */

/*
 * Copyright (C) 2011 Collabora Ltd.
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *       Raul Gutierrez Segales <raul.gutierrez.segales@collabora.co.uk>
 */

#include <glib.h>
#include <glib-object.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>

#define _g_destroy_func0(var) (((var == NULL) || (g_destroy_func == NULL)) ? NULL : (var = (g_destroy_func (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))



gboolean folks_internal_equal_sets (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeSet* a, GeeSet* b);
void folks_internal_profiling_point (const gchar* format, ...);
void folks_internal_profiling_start (const gchar* format, ...);
void folks_internal_profiling_end (const gchar* format, ...);


gboolean folks_internal_equal_sets (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeSet* a, GeeSet* b) {
	gboolean result = FALSE;
	GeeSet* _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
	GeeSet* _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	g_return_val_if_fail (a != NULL, FALSE);
	g_return_val_if_fail (b != NULL, FALSE);
	_tmp0_ = a;
	_tmp1_ = gee_collection_get_size ((GeeCollection*) _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = b;
	_tmp4_ = gee_collection_get_size ((GeeCollection*) _tmp3_);
	_tmp5_ = _tmp4_;
	if (_tmp2_ != _tmp5_) {
		result = FALSE;
		return result;
	}
	{
		GeeIterator* _a_elem_it = NULL;
		GeeSet* _tmp6_;
		GeeIterator* _tmp7_ = NULL;
		_tmp6_ = a;
		_tmp7_ = gee_iterable_iterator ((GeeIterable*) _tmp6_);
		_a_elem_it = _tmp7_;
		while (TRUE) {
			GeeIterator* _tmp8_;
			gboolean _tmp9_ = FALSE;
			gpointer a_elem = NULL;
			GeeIterator* _tmp10_;
			gpointer _tmp11_ = NULL;
			GeeSet* _tmp12_;
			gconstpointer _tmp13_;
			gboolean _tmp14_ = FALSE;
			_tmp8_ = _a_elem_it;
			_tmp9_ = gee_iterator_next (_tmp8_);
			if (!_tmp9_) {
				break;
			}
			_tmp10_ = _a_elem_it;
			_tmp11_ = gee_iterator_get (_tmp10_);
			a_elem = _tmp11_;
			_tmp12_ = b;
			_tmp13_ = a_elem;
			_tmp14_ = gee_collection_contains ((GeeCollection*) _tmp12_, _tmp13_);
			if (!_tmp14_) {
				result = FALSE;
				_g_destroy_func0 (a_elem);
				_g_object_unref0 (_a_elem_it);
				return result;
			}
			_g_destroy_func0 (a_elem);
		}
		_g_object_unref0 (_a_elem_it);
	}
	result = TRUE;
	return result;
}


/**
   * Emit a profiling point.
   *
   * This emits a profiling point with the given message (printf-style), which
   * can be picked up by profiling tools and timing information extracted.
   *
   * @param format printf-style message format
   * @param ... message arguments
   * @since 0.7.2
   */
void folks_internal_profiling_point (const gchar* format, ...) {
	g_return_if_fail (format != NULL);
}


/**
   * Start a profiling block.
   *
   * This emits a profiling start point with the given message (printf-style),
   * which can be picked up by profiling tools and timing information extracted.
   *
   * This is typically used in a pair with {@link Internal.profiling_end} to
   * delimit blocks of processing which need timing.
   *
   * @param format printf-style message format
   * @param ... message arguments
   * @since 0.7.2
   */
void folks_internal_profiling_start (const gchar* format, ...) {
	g_return_if_fail (format != NULL);
}


/**
   * End a profiling block.
   *
   * This emits a profiling end point with the given message (printf-style),
   * which can be picked up by profiling tools and timing information extracted.
   *
   * This is typically used in a pair with {@link Internal.profiling_start} to
   * delimit blocks of processing which need timing.
   *
   * @param format printf-style message format
   * @param ... message arguments
   * @since 0.7.2
   */
void folks_internal_profiling_end (const gchar* format, ...) {
	g_return_if_fail (format != NULL);
}



