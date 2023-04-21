/* my-rrect.c */

#include <stdio.h>
#include <glib-object.h>
#include "my-rrect.h"
#include "my-serial.h"
#include "my-print.h"

/* Private structure definition. */
typedef struct {
  int radius;
} MyRRectPrivate;

static void rrect_serial_init (MySerialInterface *iface);
static void rrect_print_init (MyPrintInterface *iface);

G_DEFINE_TYPE_WITH_CODE
(MyRRect, my_rrect, MY_TYPE_RECT,
 G_ADD_PRIVATE(MyRRect)
 G_IMPLEMENT_INTERFACE(MY_TYPE_PRINT, rrect_print_init)
 G_IMPLEMENT_INTERFACE(MY_TYPE_SERIAL, rrect_serial_init));

enum {
  P_NONE_,
  P_RADIUS,
  NUM__PROP
};

static GParamSpec *obj_properties[NUM__PROP] = { NULL, };

static void
my_rrect_init (MyRRect *self)
{
  MyRRectPrivate *priv = my_rrect_get_instance_private (self);
}

static void
my_rrect_dispose (GObject *gobject)
{
  MyRRectPrivate *priv = my_rrect_get_instance_private (MY_RRECT (gobject));

  G_OBJECT_CLASS (my_rrect_parent_class)->dispose (gobject);
}

static void
my_rrect_constructed (GObject *obj)
{
  /* update the object state depending on constructor properties */

  /* Always chain up to the parent constructed function to complete object
   * initialisation. */
  G_OBJECT_CLASS (my_rrect_parent_class)->constructed (obj);
}

static void
my_rrect_finalize (GObject *gobject)
{
  MyRRectPrivate *priv =
    my_rrect_get_instance_private (MY_RRECT (gobject));

  //g_free (priv->name);

  /* Always chain up to the parent class; as with dispose(), finalize()
   * is guaranteed to exist on the parent's class virtual function table
   */
  G_OBJECT_CLASS (my_rrect_parent_class)->finalize (gobject);
}

static void
my_rrect_set_property (GObject *object, guint property_id,
		       const GValue *value, GParamSpec *pspec)
{
  MyRRect *self = MY_RRECT (object);
  MyRRectPrivate *priv = my_rrect_get_instance_private (self);

  switch (property_id)
    {
    case P_RADIUS:
      priv->radius = g_value_get_int(value);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
      break;
    }
}

static void
my_rrect_get_property (GObject *object, guint property_id,
		       GValue *value, GParamSpec *pspec)
{
  MyRRect *self = MY_RRECT (object);
  MyRRectPrivate *priv = my_rrect_get_instance_private (self);

  switch (property_id)
    {
    case P_RADIUS:
      g_value_set_uint(value, priv->radius);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
      break;
    }
}

  //object_class->init = my_rrect_init;
  //object_class->constructed = my_rrect_constructed;
  //object_class->dispose = my_rrect_dispose;
  //object_class->finalize = my_rrect_finalize;
static void
my_rrect_class_init (MyRRectClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);

  object_class->set_property = my_rrect_set_property;
  object_class->get_property = my_rrect_get_property;
  
  obj_properties[P_RADIUS] =
    g_param_spec_uint ("radius",
		      "Radius",
		      "radius of round",
		       0, 100, 10, /* min, max, default values */
		       G_PARAM_READWRITE);
  g_object_class_install_properties (object_class, NUM__PROP, obj_properties);
}

/* ------------------------------- */

/* --- iface impl --- */

static void my_rrect_print_fprint(MyPrint *print, char *name) {
  MyRRect *self = MY_RRECT (print);
  printf("rrect_fprint(\"%s\")\n", name);
}

static void rrect_print_init(MyPrintInterface *iface) {
  iface->fprint = my_rrect_print_fprint;
}

static void rrect_serial_save(MySerial *object, int fd) {
  MyRRect *rrect = MY_RRECT (object);
  printf("rrect_serial_save\n");
}

static void rrect_serial_load(MySerial *object, int fd) {
  MyRRect *rrect = MY_RRECT (object);
  printf("rrect_serial_load\n");
}

static void
rrect_serial_init(MySerialInterface *iface)
{
  iface->save = rrect_serial_save;
  iface->load = rrect_serial_load;
}

/* --- last line --- */
