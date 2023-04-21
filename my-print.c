#include <stdio.h>
#include "my-print.h"

G_DEFINE_INTERFACE (MyPrint, my_print, G_TYPE_OBJECT);

static void
my_print_default_init (MyPrintInterface *iface)
{
    /* add properties and signals to the interface here */
}

void
my_print_fprint (MyPrint *self, char *name)
{
  MyPrintInterface *iface;
  
  g_return_if_fail (MY_IS_PRINT (self));

  printf("in my_print_fprint\n");
  iface = MY_PRINT_GET_IFACE (self);
  iface->fprint (self, name);
}

static void
my_print_interface_init (MyPrintInterface *iface)
{
  iface->fprint = my_print_fprint;
}

static void
my_print_init (MyPrint *self)
{
  /* Instance variable initialisation code.  */
}

/* --- last line --- */
