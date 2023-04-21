/* my-rect.c */

#include <stdio.h>
#include <glib-object.h>
#include "my-rect.h"
#include "my-serial.h"
#include "my-print.h"

static void my_rect_serial_init(MySerialInterface *iface);
static void my_rect_print_init(MyPrintInterface *iface);

/* Private structure definition. */
typedef struct {
  int width;
  int height;
  char *name;
} MyRectPrivate;

G_DEFINE_TYPE_WITH_CODE
(MyRect, my_rect, G_TYPE_OBJECT,
 G_ADD_PRIVATE(MyRect)
 G_IMPLEMENT_INTERFACE (MY_TYPE_PRINT, my_rect_print_init)
 G_IMPLEMENT_INTERFACE (MY_TYPE_SERIAL, my_rect_serial_init));

enum {
  P_NONE_,
  P_WIDTH,
  P_HEIGHT,
  NUM__PROP
};

static GParamSpec *obj_properties[NUM__PROP] = { NULL, };

static void my_rect_set_property (GObject *object, guint property_id,
				  const GValue *value, GParamSpec   *pspec);
static void my_rect_get_property (GObject *object, guint property_id,
				  GValue *value, GParamSpec *pspec);


static void my_rect_dispose (GObject *gobject);
static void my_rect_finalize (GObject *gobject);
			 
static void
my_rect_class_init (MyRectClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);

  object_class->dispose = my_rect_dispose;
  object_class->finalize = my_rect_finalize;
  object_class->set_property = my_rect_set_property;
  object_class->get_property = my_rect_get_property;

  obj_properties[P_WIDTH] =
    g_param_spec_int ("width",
		      "Width",
		      "width of rect",
		      50, 5000, 500, /* min, max, default values */
		      G_PARAM_READWRITE);

  obj_properties[P_HEIGHT] =
    g_param_spec_int ("height",
		      "Height",
		      "height of rect.",
		      30, 3000, 300,  /* min, max, default values */
		      G_PARAM_READWRITE);

  g_object_class_install_properties (object_class, NUM__PROP, obj_properties);
}

static void
my_rect_init (MyRect *self)
{
  MyRectPrivate *priv = my_rect_get_instance_private (self);
  
  priv->name = 0;
}

static void
my_rect_dispose (GObject *gobject)
{
  MyRectPrivate *priv = my_rect_get_instance_private (MY_RECT (gobject));

  /* In dispose(), you are supposed to free all types referenced from this
   * object which might themselves hold a reference to self. Generally,
   * the most simple solution is to unref all members on which you own a 
   * reference.
   *
   * dispose() might be called multiple times, so we must guard against
   * calling g_object_unref() on an invalid GObject by setting the member
   * NULL; g_clear_object() does this for us.
   */
  g_clear_object (&priv->name);

  /* Always chain up to the parent class; there is no need to check if
   * the parent class implements the dispose() virtual function: it is
   * always guaranteed to do so
   */
  G_OBJECT_CLASS (my_rect_parent_class)->dispose (gobject);
}

static void
my_rect_finalize (GObject *gobject)
{
  MyRectPrivate *priv =
    my_rect_get_instance_private (MY_RECT (gobject));

  g_free (priv->name);

  /* Always chain up to the parent class; as with dispose(), finalize()
   * is guaranteed to exist on the parent's class virtual function table
   */
  G_OBJECT_CLASS (my_rect_parent_class)->finalize (gobject);
}

static void
my_rect_set_property (GObject *object, guint property_id,
		      const GValue *value, GParamSpec *pspec)
{
  MyRect *self = MY_RECT (object);
  MyRectPrivate *priv = my_rect_get_instance_private (self);

  switch (property_id)
    {
    case P_WIDTH:
      priv->width = g_value_get_int(value);
      break;
    case P_HEIGHT:
      priv->height = g_value_get_int(value);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
      break;
    }
}

static void
my_rect_get_property (GObject *object, guint property_id,
		      GValue *value, GParamSpec *pspec)
{
  MyRect *self = MY_RECT (object);
  MyRectPrivate *priv = my_rect_get_instance_private (self);

  switch (property_id)
    {
    case P_WIDTH:
      g_value_set_uint(value, priv->width);
      break;
    case P_HEIGHT:
      g_value_set_uint(value, priv->height);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
      break;
    }
}

static void my_rect_print_fprint(MyPrint *print, char *name) {
   MyRect *rect = MY_RECT (print);
  printf("rect_fprint(%s)\n", name);
}

static void my_rect_print_init(MyPrintInterface *iface) {
  iface->fprint = my_rect_print_fprint;
}

static void my_rect_serial_load(MySerial *serial, int id) {
  MyRect *self = MY_RECT (serial);
  printf("rect_load %d\n", id);
}

static void my_rect_serial_save(MySerial *serial, int id) {
  MyRect *self = MY_RECT (serial);
  printf("rect_save %d\n", id);
}

static void my_rect_serial_init(MySerialInterface *iface) {
  iface->load = my_rect_serial_load;
  iface->save = my_rect_serial_save;
}


/* --- last line --- */
