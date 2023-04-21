#include "my-extent.h"


/* Private structure definition. */
typedef struct {
  unsigned width;
  unsigned height;
  char *name;
} MyExtentPrivate;

G_DEFINE_TYPE_WITH_CODE (MyExtent, my_extent, G_TYPE_OBJECT,
			 G_ADD_PRIVATE(MyExtent));

enum {
  P_NONE_,
  P_WIDTH,
  P_HEIGHT,
  NUM__PROP
};

static GParamSpec *obj_properties[NUM__PROP] = { NULL, };

static void my_extent_set_property (GObject *object, guint property_id,
				  const GValue *value, GParamSpec *pspec);
static void my_extent_get_property (GObject *object, guint property_id,
				  GValue *value, GParamSpec *pspec);


static void my_extent_dispose (GObject *gobject);
static void my_extent_finalize (GObject *gobject);
			 
static void
my_extent_class_init (MyExtentClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);

  object_class->dispose = my_extent_dispose;
  object_class->finalize = my_extent_finalize;
  object_class->set_property = my_extent_set_property;
  object_class->get_property = my_extent_get_property;

  obj_properties[P_WIDTH] =
    g_param_spec_uint ("width",
		      "Width",
		      "width of extent",
		       1, 10000, 10, /* min, max, default values */
		       G_PARAM_READWRITE);

  obj_properties[P_HEIGHT] =
    g_param_spec_uint ("height",
                       "height",
                       "height of extent",
                       0, 10, 2,  /* min, max, default values */,
                       G_PARAM_READWRITE);

  g_object_class_install_properties (object_class, NUM__PROP, obj_properties);
}

static void
my_extent_init (MyExtent *self)
{
  MyExtentPrivate *priv = my_extent_get_instance_private (self);
  
  priv->name = 0;
}

static void
my_extent_dispose (GObject *gobject)
{
  MyExtentPrivate *priv = my_extent_get_instance_private (MY_EXTENT (gobject));

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
  G_OBJECT_CLASS (my_extent_parent_class)->dispose (gobject);
}

static void
my_extent_finalize (GObject *gobject)
{
  MyExtentPrivate *priv =
    my_extent_get_instance_private (MY_EXTENT (gobject));

  g_free (priv->name);

  /* Always chain up to the parent class; as with dispose(), finalize()
   * is guaranteed to exist on the parent's class virtual function table
   */
  G_OBJECT_CLASS (my_extent_parent_class)->finalize (gobject);
}

static void
my_extent_set_property (GObject *object, guint property_id,
		      const GValue *value, GParamSpec *pspec)
{
  MyExtent *self = MY_EXTENT (object);
  MyExtentPrivate *priv = my_extent_get_instance_private (self);

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
my_extent_get_property (GObject *object, guint property_id,
		      GValue *value, GParamSpec *pspec)
{
  MyExtent *self = MY_EXTENT (object);
  MyExtentPrivate *priv = my_extent_get_instance_private (self);

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
