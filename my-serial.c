
#include "my-serial.h"

G_DEFINE_INTERFACE (MySerial, my_serial, G_TYPE_OBJECT);

static void
my_serial_default_init (MySerialInterface *iface)
{
    /* add properties and signals to the interface here */
}

void
my_serial_save (MySerial *self, int fd)
{
  MySerialInterface *iface;

  g_return_if_fail (MY_IS_SERIAL (self));
  MY_SERIAL_GET_IFACE(self)->save(self, fd);
}

void
my_serial_load (MySerial *self, int fd)
{
  g_return_if_fail (MY_IS_SERIAL (self));

  MY_SERIAL_GET_IFACE(self)->load(self, fd);
}

static void
my_serial_interface_init (MySerialInterface *iface)
{
  iface->save = my_serial_save;
  iface->load = my_serial_load;
}

static void
my_serial_init (MySerial *self)
{
  /* Instance variable initialisation code.  */
}

/* --- last line --- */
