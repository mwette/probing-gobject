#ifndef __MY_EXTENT_H__
#define __MY_EXTENT_H__
#include <glib-object.h>

G_BEGIN_DECLS

/* Type declaration. */
#define MY_TYPE_EXTENT my_extent_get_type ()
G_DECLARE_DERIVABLE_TYPE (MyExtent, my_extent, MY, EXTENT, GObject)

struct _MyExtentClass
{
  GObjectClass parent_class;
  int (*top) (MyExtent *extent);
  int (*bot) (MyExtent *extent);
  int (*lt) (MyExtent *extent);	
  int (*rt) (MyExtent *extent);	
  gpointer _pad[9];
};

/* Method definitions. */
MyExtent *my_extent_new (void);

#if 0
/* declaration in the header. */
void my_extent_open (MyExtent *self, GError **error);
#endif

G_END_DECLS
#endif
/* --- last line --- */
