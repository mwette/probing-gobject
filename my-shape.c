#include "my-shape.h"


/* Private structure definition. */
typedef struct {
  unsigned width;
  unsigned height;
  char *name;
} MyShapePrivate;

G_DEFINE_TYPE_WITH_CODE (MyShape, my_shape, G_TYPE_OBJECT,
			 G_ADD_PRIVATE(MyShape));

enum {
  P_NONE_,
  P_WIDTH,
  P_HEIGHT,
  NUM__PROP
};

static GParamSpec *obj_properties[NUM__PROP] = { NULL, };

static void my_shape_set_property (GObject *object, guint property_id,
				  const GValue *value, GParamSpec   *pspec);
static void my_shape_get_property (GObject *object, guint property_id,
				  GValue *value, GParamSpec *pspec);


static void my_shape_dispose (GObject *gobject);
static void my_shape_finalize (GObject *gobject);
			 
static void
my_shape_class_init (MyShapeClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);

  object_class->dispose = my_shape_dispose;
  object_class->finalize = my_shape_finalize;
  object_class->set_property = my_shape_set_property;
  object_class->get_property = my_shape_get_property;

  obj_properties[P_WIDTH] =
    g_param_spec_uint ("width",
		      "Width",
		      "width of shape",
		       1, 10000, 10, /* min, max, default values */
		       G_PARAM_READWRITE);

  obj_properties[P_HEIGHT] =
    g_param_spec_uint ("zoom-level",
                       "Zoom level",
                       "Zoom level to view the file at.",
                       0  /* minimum value */,
                       10 /* maximum value */,
                       2  /* default value */,
                       G_PARAM_READWRITE);

  g_object_class_install_properties (object_class, NUM__PROP, obj_properties);
}

static void
my_shape_init (MyShape *self)
{
  MyShapePrivate *priv = my_shape_get_instance_private (self);
  
  priv->name = 0;
}

static void
my_shape_dispose (GObject *gobject)
{
  MyShapePrivate *priv = my_shape_get_instance_private (MY_SHAPE (gobject));

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
  G_OBJECT_CLASS (my_shape_parent_class)->dispose (gobject);
}

static void
my_shape_finalize (GObject *gobject)
{
  MyShapePrivate *priv =
    my_shape_get_instance_private (MY_SHAPE (gobject));

  g_free (priv->name);

  /* Always chain up to the parent class; as with dispose(), finalize()
   * is guaranteed to exist on the parent's class virtual function table
   */
  G_OBJECT_CLASS (my_shape_parent_class)->finalize (gobject);
}

static void
my_shape_set_property (GObject *object, guint property_id,
		      const GValue *value, GParamSpec *pspec)
{
  MyShape *self = MY_SHAPE (object);
  MyShapePrivate *priv = my_shape_get_instance_private (self);

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
my_shape_get_property (GObject *object, guint property_id,
		      GValue *value, GParamSpec *pspec)
{
  MyShape *self = MY_SHAPE (object);
  MyShapePrivate *priv = my_shape_get_instance_private (self);

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


/* --- last line --- */
