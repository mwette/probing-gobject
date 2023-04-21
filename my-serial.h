#ifndef MY_SERIAL_H__
#define MY_SERIAL_H__
#include <glib-object.h>

G_BEGIN_DECLS

#define MY_TYPE_SERIAL	(my_serial_get_type ())
G_DECLARE_INTERFACE(MySerial, my_serial, MY, SERIAL, GObject)

struct _MySerialInterface
{
  GTypeInterface parent_iface;
  void (*save) (MySerial *self, int fd);
  void (*load) (MySerial *self, int fd);
};

/* defaults, I guess */
void my_serial_save (MySerial *self, int id); 
void my_serial_load (MySerial *self, int id);

G_END_DECLS
#endif
/* --- last line --- */
