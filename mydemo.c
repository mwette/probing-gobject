#include <stdio.h>
#include <glib-object.h>
#include "my-rect.h"
#include "my-rrect.h"
#include "my-print.h"
#include "my-serial.h"

int main() {
  MyRRect *rrect;
  GValue wid = G_VALUE_INIT, hei = G_VALUE_INIT, rad = G_VALUE_INIT;
  int vwid = 100, vhei = 60, vrad = 5;

#if 0
  g_value_init(&wid, G_TYPE_INT); g_value_set_int(&wid, 100);
  g_value_init(&hei, G_TYPE_INT); g_value_set_int(&hei, 60);
  g_value_init(&rad, G_TYPE_INT); g_value_set_int(&rad, 5);
#endif

  rrect = g_object_new (MY_TYPE_RRECT,
			"width", vwid,
			"height", vhei,
			"radius", vrad,
			NULL);
  my_print_fprint((MyPrint*)rrect, "hello");
  printf("MY_TYPE_RECT   = 0x%lx\n", MY_TYPE_RECT);
  printf("MY_TYPE_RRECT  = 0x%lx\n", MY_TYPE_RRECT);
  printf("MY_TYPE_PRINT  = 0x%lx\n", MY_TYPE_PRINT);
  printf("MY_TYPE_SERIAL = 0x%lx\n", MY_TYPE_SERIAL);
  printf("        &rrect = %p\n", rrect);
}

/* --- last line --- */
