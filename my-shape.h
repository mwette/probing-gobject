#ifndef __MY_SHAPE_H__
#define __MY_SHAPE_H__
#include <glib-object.h>

G_BEGIN_DECLS

/* Type declaration. */
#define MY_TYPE_SHAPE my_shape_get_type ()
G_DECLARE_DERIVABLE_TYPE (MyShape, my_shape, MY, SHAPE, GObject)

struct _MyShapeClass
{
  GObjectClass parent_class;
  int (*extent) (MyShape *shape);	/* extent */
  gpointer _pad[12];			/* margin */
};

/* Method definitions. */
MyShape *my_shape_new (void);

#if 0
/* declaration in the header. */
void my_shape_open (MyShape *self, GError **error);
#endif

G_END_DECLS
#endif
/* --- last line --- */
