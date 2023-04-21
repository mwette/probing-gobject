#ifndef MY_RECT_H__
#define MY_RECT_H__
#include <glib-object.h>

G_BEGIN_DECLS

/* Type declaration. */
#define MY_TYPE_RECT (my_rect_get_type ())
G_DECLARE_DERIVABLE_TYPE (MyRect, my_rect, MY, RECT, GObject)

struct _MyRectClass
{
  GObjectClass parent_class;
  int (*area) (MyRect  *rect);		/* area */
  gpointer _pad[12];			/* margin */
};

/* Method definitions. */
MyRect *my_rect_new (void);

G_END_DECLS
#endif
/* --- last line --- */
