#ifndef MY_PRINT_H__
#define MY_PRINT_H__
#include <glib-object.h>

G_BEGIN_DECLS

#define MY_TYPE_PRINT  (my_print_get_type ())
G_DECLARE_INTERFACE(MyPrint, my_print, MY, PRINT, GObject)

struct _MyPrintInterface
{
  GTypeInterface parent_iface;
  void (*fprint) (MyPrint *self, char *name);
};

void my_print_fprint (MyPrint *self, char *name);

G_END_DECLS
#endif
/* --- last line --- */
