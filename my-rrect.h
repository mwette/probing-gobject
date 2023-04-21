#ifndef __MY_RRECT_H__
#define __MY_RRECT_H__
#include <glib-object.h>
#include "my-rect.h"

G_BEGIN_DECLS

/* Type declaration. */
#define MY_TYPE_RRECT (my_rrect_get_type ())
G_DECLARE_DERIVABLE_TYPE (MyRRect, my_rrect, MY, RRECT, MyRect)
  
struct _MyRRectClass
{
  MyRectClass parent_class;
  gpointer padding[12];
};

/* Method definitions. */
MyRRect *my_rrect_new (void);

G_END_DECLS
#endif
/* --- last line --- */
