/* libglimpse - The Glimpse Library
 * Copyright (C) 1995-2003 Peter Mattis and Spencer Kimball
 *
 * gimpdrawable_pdb.h
 *
 * This library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <https://www.gnu.org/licenses/>.
 */

/* NOTE: This file is auto-generated by pdbgen.pl */

#if !defined (__GIMP_H_INSIDE__) && !defined (GIMP_COMPILATION)
#error "Only <libglimpse/gimp.h> can be included directly."
#endif

#ifndef __GIMP_DRAWABLE_PDB_H__
#define __GIMP_DRAWABLE_PDB_H__

G_BEGIN_DECLS

/* For information look into the C source or the html documentation */


G_GNUC_INTERNAL gchar*   _gimp_drawable_get_format           (gint32                      drawable_ID);
G_GNUC_INTERNAL gchar*   _gimp_drawable_get_thumbnail_format (gint32                      drawable_ID);
GimpImageType            gimp_drawable_type                  (gint32                      drawable_ID);
GimpImageType            gimp_drawable_type_with_alpha       (gint32                      drawable_ID);
gboolean                 gimp_drawable_has_alpha             (gint32                      drawable_ID);
gboolean                 gimp_drawable_is_rgb                (gint32                      drawable_ID);
gboolean                 gimp_drawable_is_gray               (gint32                      drawable_ID);
gboolean                 gimp_drawable_is_indexed            (gint32                      drawable_ID);
gint                     gimp_drawable_bpp                   (gint32                      drawable_ID);
gint                     gimp_drawable_width                 (gint32                      drawable_ID);
gint                     gimp_drawable_height                (gint32                      drawable_ID);
gboolean                 gimp_drawable_offsets               (gint32                      drawable_ID,
                                                              gint                       *offset_x,
                                                              gint                       *offset_y);
GIMP_DEPRECATED
gboolean                 gimp_drawable_set_image             (gint32                      drawable_ID,
                                                              gint32                      image_ID);
gboolean                 gimp_drawable_mask_bounds           (gint32                      drawable_ID,
                                                              gint                       *x1,
                                                              gint                       *y1,
                                                              gint                       *x2,
                                                              gint                       *y2);
gboolean                 gimp_drawable_mask_intersect        (gint32                      drawable_ID,
                                                              gint                       *x,
                                                              gint                       *y,
                                                              gint                       *width,
                                                              gint                       *height);
gboolean                 gimp_drawable_merge_shadow          (gint32                      drawable_ID,
                                                              gboolean                    undo);
gboolean                 gimp_drawable_free_shadow           (gint32                      drawable_ID);
gboolean                 gimp_drawable_update                (gint32                      drawable_ID,
                                                              gint                        x,
                                                              gint                        y,
                                                              gint                        width,
                                                              gint                        height);
guint8*                  gimp_drawable_get_pixel             (gint32                      drawable_ID,
                                                              gint                        x_coord,
                                                              gint                        y_coord,
                                                              gint                       *num_channels);
gboolean                 gimp_drawable_set_pixel             (gint32                      drawable_ID,
                                                              gint                        x_coord,
                                                              gint                        y_coord,
                                                              gint                        num_channels,
                                                              const guint8               *pixel);
gboolean                 gimp_drawable_fill                  (gint32                      drawable_ID,
                                                              GimpFillType                fill_type);
gboolean                 gimp_drawable_offset                (gint32                      drawable_ID,
                                                              gboolean                    wrap_around,
                                                              GimpOffsetType              fill_type,
                                                              gint                        offset_x,
                                                              gint                        offset_y);
G_GNUC_INTERNAL gboolean _gimp_drawable_thumbnail            (gint32                      drawable_ID,
                                                              gint                        width,
                                                              gint                        height,
                                                              gint                       *actual_width,
                                                              gint                       *actual_height,
                                                              gint                       *bpp,
                                                              gint                       *thumbnail_data_count,
                                                              guint8                    **thumbnail_data);
G_GNUC_INTERNAL gboolean _gimp_drawable_sub_thumbnail        (gint32                      drawable_ID,
                                                              gint                        src_x,
                                                              gint                        src_y,
                                                              gint                        src_width,
                                                              gint                        src_height,
                                                              gint                        dest_width,
                                                              gint                        dest_height,
                                                              gint                       *width,
                                                              gint                       *height,
                                                              gint                       *bpp,
                                                              gint                       *thumbnail_data_count,
                                                              guint8                    **thumbnail_data);
gboolean                 gimp_drawable_foreground_extract    (gint32                      drawable_ID,
                                                              GimpForegroundExtractMode   mode,
                                                              gint32                      mask_ID);


G_END_DECLS

#endif /* __GIMP_DRAWABLE_PDB_H__ */