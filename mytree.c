#include <stdio.h>
#include <glib-object.h>
#define MY_TYPE_PRINT (my_print_get_type ())

GType my_print_get_type(void );

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

typedef struct _MyPrint MyPrint;
typedef struct _MyPrintInterface MyPrintInterface;
typedef MyPrint *MyPrint_autoptr;
typedef GList *MyPrint_listautoptr;
typedef GSList *MyPrint_slistautoptr;
typedef GQueue *MyPrint_queueautoptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

static inline void glib_autoptr_clear_MyPrint(MyPrint *_ptr) {
  if (_ptr) glib_autoptr_clear_GObject((GObject*)_ptr);
}

static inline void glib_autoptr_cleanup_MyPrint(MyPrint **_ptr) {
  glib_autoptr_clear_MyPrint(*_ptr);
}

static inline void glib_listautoptr_cleanup_MyPrint(GList **_l) {
  g_list_free_full(*_l, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_GObject);
}

static inline void glib_slistautoptr_cleanup_MyPrint(GSList **_l) {
  g_slist_free_full(*_l, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_GObject);
}

static inline void glib_queueautoptr_cleanup_MyPrint(GQueue **_q) {
  if (*_q) g_queue_free_full(*_q, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_GObject);
}

#pragma GCC diagnostic pop

static inline MyPrint *MY_PRINT(gpointer ptr) {
  return (MyPrint*)(void*)g_type_check_instance_cast((GTypeInstance*)ptr, 
      my_print_get_type());
}

static inline gboolean MY_IS_PRINT(gpointer ptr) {
  return ({
    GTypeInstance *__inst = (GTypeInstance*)ptr;
    GType __t = my_print_get_type();
    gboolean __r;
    if (!__inst) __r = 0;
    else if (__inst->g_class && __inst->g_class->g_type == __t) __r = !0;
    else __r = g_type_check_instance_is_a(__inst, __t);
    __r;
  });
}

static inline MyPrintInterface *MY_PRINT_GET_IFACE(gpointer ptr) {
  return (MyPrintInterface*)g_type_interface_peek(((GTypeInstance*)ptr)->
      g_class, my_print_get_type());
}

#pragma GCC diagnostic pop

struct _MyPrintInterface {
  GTypeInterface parent_iface;
  void (*fprint)(MyPrint *self, char *name);
};
void my_print_fprint(MyPrint *self, char *name);

#define MY_TYPE_SERIAL (my_serial_get_type ())

GType my_serial_get_type(void );

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

typedef struct _MySerial MySerial;
typedef struct _MySerialInterface MySerialInterface;
typedef MySerial *MySerial_autoptr;
typedef GList *MySerial_listautoptr;
typedef GSList *MySerial_slistautoptr;
typedef GQueue *MySerial_queueautoptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

static inline void glib_autoptr_clear_MySerial(MySerial *_ptr) {
  if (_ptr) glib_autoptr_clear_GObject((GObject*)_ptr);
}

static inline void glib_autoptr_cleanup_MySerial(MySerial **_ptr) {
  glib_autoptr_clear_MySerial(*_ptr);
}

static inline void glib_listautoptr_cleanup_MySerial(GList **_l) {
  g_list_free_full(*_l, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_GObject);
}

static inline void glib_slistautoptr_cleanup_MySerial(GSList **_l) {
  g_slist_free_full(*_l, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_GObject);
}

static inline void glib_queueautoptr_cleanup_MySerial(GQueue **_q) {
  if (*_q) g_queue_free_full(*_q, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_GObject);
}

#pragma GCC diagnostic pop

static inline MySerial *MY_SERIAL(gpointer ptr) {
  return (MySerial*)(void*)g_type_check_instance_cast((GTypeInstance*)ptr, 
      my_serial_get_type());
}

static inline gboolean MY_IS_SERIAL(gpointer ptr) {
  return ({
    GTypeInstance *__inst = (GTypeInstance*)ptr;
    GType __t = my_serial_get_type();
    gboolean __r;
    if (!__inst) __r = 0;
    else if (__inst->g_class && __inst->g_class->g_type == __t) __r = !0;
    else __r = g_type_check_instance_is_a(__inst, __t);
    __r;
  });
}

static inline MySerialInterface *MY_SERIAL_GET_IFACE(gpointer ptr) {
  return (MySerialInterface*)g_type_interface_peek(((GTypeInstance*)ptr)->
      g_class, my_serial_get_type());
}

#pragma GCC diagnostic pop

struct _MySerialInterface {
  GTypeInterface parent_iface;
  void (*save)(MySerial *self, int fd);
  void (*load)(MySerial *self, int fd);
};
void my_serial_save(MySerial *self, int id);
void my_serial_load(MySerial *self, int id);

#define MY_TYPE_RECT (my_rect_get_type ())

GType my_rect_get_type(void );

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

typedef struct _MyRect MyRect;
typedef struct _MyRectClass MyRectClass;
struct _MyRect {
  GObject parent_instance;
};
typedef MyRect *MyRect_autoptr;
typedef GList *MyRect_listautoptr;
typedef GSList *MyRect_slistautoptr;
typedef GQueue *MyRect_queueautoptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

static inline void glib_autoptr_clear_MyRect(MyRect *_ptr) {
  if (_ptr) glib_autoptr_clear_GObject((GObject*)_ptr);
}

static inline void glib_autoptr_cleanup_MyRect(MyRect **_ptr) {
  glib_autoptr_clear_MyRect(*_ptr);
}

static inline void glib_listautoptr_cleanup_MyRect(GList **_l) {
  g_list_free_full(*_l, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_GObject);
}

static inline void glib_slistautoptr_cleanup_MyRect(GSList **_l) {
  g_slist_free_full(*_l, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_GObject);
}

static inline void glib_queueautoptr_cleanup_MyRect(GQueue **_q) {
  if (*_q) g_queue_free_full(*_q, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_GObject);
}

#pragma GCC diagnostic pop

typedef MyRectClass *MyRectClass_autoptr;
typedef GList *MyRectClass_listautoptr;
typedef GSList *MyRectClass_slistautoptr;
typedef GQueue *MyRectClass_queueautoptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

static inline void glib_autoptr_clear_MyRectClass(MyRectClass *_ptr) {
  if (_ptr) g_type_class_unref((MyRectClass*)_ptr);
}

static inline void glib_autoptr_cleanup_MyRectClass(MyRectClass **_ptr) {
  glib_autoptr_clear_MyRectClass(*_ptr);
}

static inline void glib_listautoptr_cleanup_MyRectClass(GList **_l) {
  g_list_free_full(*_l, (GDestroyNotify)(void(*)(void ))g_type_class_unref);
}

static inline void glib_slistautoptr_cleanup_MyRectClass(GSList **_l) {
  g_slist_free_full(*_l, (GDestroyNotify)(void(*)(void ))g_type_class_unref);
}

static inline void glib_queueautoptr_cleanup_MyRectClass(GQueue **_q) {
  if (*_q) g_queue_free_full(*_q, (GDestroyNotify)(void(*)(void ))
      g_type_class_unref);
}

#pragma GCC diagnostic pop

static inline MyRect *MY_RECT(gpointer ptr) {
  return (MyRect*)(void*)g_type_check_instance_cast((GTypeInstance*)ptr, 
      my_rect_get_type());
}

static inline MyRectClass *MY_RECT_CLASS(gpointer ptr) {
  return (MyRectClass*)(void*)g_type_check_class_cast((GTypeClass*)ptr, 
      my_rect_get_type());
}

static inline gboolean MY_IS_RECT(gpointer ptr) {
  return ({
    GTypeInstance *__inst = (GTypeInstance*)ptr;
    GType __t = my_rect_get_type();
    gboolean __r;
    if (!__inst) __r = 0;
    else if (__inst->g_class && __inst->g_class->g_type == __t) __r = !0;
    else __r = g_type_check_instance_is_a(__inst, __t);
    __r;
  });
}

static inline gboolean MY_IS_RECT_CLASS(gpointer ptr) {
  return ({
    GTypeClass *__class = (GTypeClass*)ptr;
    GType __t = my_rect_get_type();
    gboolean __r;
    if (!__class) __r = 0;
    else if (__class->g_type == __t) __r = !0;
    else __r = g_type_check_class_is_a(__class, __t);
    __r;
  });
}

static inline MyRectClass *MY_RECT_GET_CLASS(gpointer ptr) {
  return (MyRectClass*)((GTypeInstance*)ptr)->g_class;
}

#pragma GCC diagnostic pop

struct _MyRectClass {
  GObjectClass parent_class;
  int (*area)(MyRect *rect);
  gpointer _pad[12];
};
MyRect *my_rect_new(void );

#define MY_TYPE_RRECT (my_rrect_get_type ())

GType my_rrect_get_type(void );

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

typedef struct _MyRRect MyRRect;
typedef struct _MyRRectClass MyRRectClass;
struct _MyRRect {
  MyRect parent_instance;
};
typedef MyRRect *MyRRect_autoptr;
typedef GList *MyRRect_listautoptr;
typedef GSList *MyRRect_slistautoptr;
typedef GQueue *MyRRect_queueautoptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

static inline void glib_autoptr_clear_MyRRect(MyRRect *_ptr) {
  if (_ptr) glib_autoptr_clear_MyRect((MyRect*)_ptr);
}

static inline void glib_autoptr_cleanup_MyRRect(MyRRect **_ptr) {
  glib_autoptr_clear_MyRRect(*_ptr);
}

static inline void glib_listautoptr_cleanup_MyRRect(GList **_l) {
  g_list_free_full(*_l, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_MyRect);
}

static inline void glib_slistautoptr_cleanup_MyRRect(GSList **_l) {
  g_slist_free_full(*_l, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_MyRect);
}

static inline void glib_queueautoptr_cleanup_MyRRect(GQueue **_q) {
  if (*_q) g_queue_free_full(*_q, (GDestroyNotify)(void(*)(void ))
      glib_autoptr_clear_MyRect);
}

#pragma GCC diagnostic pop

typedef MyRRectClass *MyRRectClass_autoptr;
typedef GList *MyRRectClass_listautoptr;
typedef GSList *MyRRectClass_slistautoptr;
typedef GQueue *MyRRectClass_queueautoptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

static inline void glib_autoptr_clear_MyRRectClass(MyRRectClass *_ptr) {
  if (_ptr) g_type_class_unref((MyRRectClass*)_ptr);
}

static inline void glib_autoptr_cleanup_MyRRectClass(MyRRectClass **_ptr) {
  glib_autoptr_clear_MyRRectClass(*_ptr);
}

static inline void glib_listautoptr_cleanup_MyRRectClass(GList **_l) {
  g_list_free_full(*_l, (GDestroyNotify)(void(*)(void ))g_type_class_unref);
}

static inline void glib_slistautoptr_cleanup_MyRRectClass(GSList **_l) {
  g_slist_free_full(*_l, (GDestroyNotify)(void(*)(void ))g_type_class_unref);
}

static inline void glib_queueautoptr_cleanup_MyRRectClass(GQueue **_q) {
  if (*_q) g_queue_free_full(*_q, (GDestroyNotify)(void(*)(void ))
      g_type_class_unref);
}

#pragma GCC diagnostic pop

static inline MyRRect *MY_RRECT(gpointer ptr) {
  return (MyRRect*)(void*)g_type_check_instance_cast((GTypeInstance*)ptr, 
      my_rrect_get_type());
}

static inline MyRRectClass *MY_RRECT_CLASS(gpointer ptr) {
  return (MyRRectClass*)(void*)g_type_check_class_cast((GTypeClass*)ptr, 
      my_rrect_get_type());
}

static inline gboolean MY_IS_RRECT(gpointer ptr) {
  return ({
    GTypeInstance *__inst = (GTypeInstance*)ptr;
    GType __t = my_rrect_get_type();
    gboolean __r;
    if (!__inst) __r = 0;
    else if (__inst->g_class && __inst->g_class->g_type == __t) __r = !0;
    else __r = g_type_check_instance_is_a(__inst, __t);
    __r;
  });
}

static inline gboolean MY_IS_RRECT_CLASS(gpointer ptr) {
  return ({
    GTypeClass *__class = (GTypeClass*)ptr;
    GType __t = my_rrect_get_type();
    gboolean __r;
    if (!__class) __r = 0;
    else if (__class->g_type == __t) __r = !0;
    else __r = g_type_check_class_is_a(__class, __t);
    __r;
  });
}

static inline MyRRectClass *MY_RRECT_GET_CLASS(gpointer ptr) {
  return (MyRRectClass*)((GTypeInstance*)ptr)->g_class;
}

#pragma GCC diagnostic pop

struct _MyRRectClass {
  MyRectClass parent_class;
  gpointer padding[12];
};
MyRRect *my_rrect_new(void );
static void my_print_default_init(MyPrintInterface *klass);

GType my_print_get_type(void ) {
  static gsize static_g_define_type_id = 0;
  if (({
    _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
        "Expression evaluates to false");
    (void)(0? (gpointer)*&static_g_define_type_id: (void*)0);
    !({
      _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
          "Expression evaluates to false");
      typeof(*&static_g_define_type_id)  gapg_temp_newval;
      typeof(&static_g_define_type_id)  gapg_temp_atomic = &
          static_g_define_type_id;
      __atomic_load(gapg_temp_atomic, &gapg_temp_newval, 5);
      gapg_temp_newval;
    }) && g_once_init_enter(&static_g_define_type_id);
  })) {
    GType g_define_type_id = g_type_register_static_simple((GType)(2<<2), 
        g_intern_static_string("MyPrint"), sizeof(MyPrintInterface), (
        GClassInitFunc)(void(*)(void ))my_print_default_init, 0, (
        GInstanceInitFunc)(void*)0, (GTypeFlags)0);
    if ((GType)(20<<2) != (GType)(0<<2)) g_type_interface_add_prerequisite(
        g_define_type_id, (GType)(20<<2));
    {
      {
        ;
        ;
      }
    }
    ({
      _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
          "Expression evaluates to false");
      0? (void)(*&static_g_define_type_id = g_define_type_id): (void)0;
      g_once_init_leave(&static_g_define_type_id, (gsize)g_define_type_id);
    });
  }
  return static_g_define_type_id;
}

;
static void my_print_default_init(MyPrintInterface *iface) {
}

void my_print_fprint(MyPrint *self, char *name) {
  MyPrintInterface *iface;
  do {
    if (MY_IS_PRINT(self)) {
    }
    else {
      g_return_if_fail_warning((gchar*)0, (const char*)__func__, 
          "MY_IS_PRINT (self)");
      return ;
    }
  } while (0);
  printf("in my_print_fprint\n");
  iface = MY_PRINT_GET_IFACE(self);
  iface->fprint(self, name);
}

static void my_print_interface_init(MyPrintInterface *iface) {
  iface->fprint = my_print_fprint;
}

static void my_print_init(MyPrint *self) {
}

static void my_serial_default_init(MySerialInterface *klass);

GType my_serial_get_type(void ) {
  static gsize static_g_define_type_id = 0;
  if (({
    _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
        "Expression evaluates to false");
    (void)(0? (gpointer)*&static_g_define_type_id: (void*)0);
    !({
      _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
          "Expression evaluates to false");
      typeof(*&static_g_define_type_id)  gapg_temp_newval;
      typeof(&static_g_define_type_id)  gapg_temp_atomic = &
          static_g_define_type_id;
      __atomic_load(gapg_temp_atomic, &gapg_temp_newval, 5);
      gapg_temp_newval;
    }) && g_once_init_enter(&static_g_define_type_id);
  })) {
    GType g_define_type_id = g_type_register_static_simple((GType)(2<<2), 
        g_intern_static_string("MySerial"), sizeof(MySerialInterface), (
        GClassInitFunc)(void(*)(void ))my_serial_default_init, 0, (
        GInstanceInitFunc)(void*)0, (GTypeFlags)0);
    if ((GType)(20<<2) != (GType)(0<<2)) g_type_interface_add_prerequisite(
        g_define_type_id, (GType)(20<<2));
    {
      {
        ;
        ;
      }
    }
    ({
      _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
          "Expression evaluates to false");
      0? (void)(*&static_g_define_type_id = g_define_type_id): (void)0;
      g_once_init_leave(&static_g_define_type_id, (gsize)g_define_type_id);
    });
  }
  return static_g_define_type_id;
}

;
static void my_serial_default_init(MySerialInterface *iface) {
}

void my_serial_save(MySerial *self, int fd) {
  MySerialInterface *iface;
  do {
    if (MY_IS_SERIAL(self)) {
    }
    else {
      g_return_if_fail_warning((gchar*)0, (const char*)__func__, 
          "MY_IS_SERIAL (self)");
      return ;
    }
  } while (0);
  MY_SERIAL_GET_IFACE(self)->save(self, fd);
}

void my_serial_load(MySerial *self, int fd) {
  do {
    if (MY_IS_SERIAL(self)) {
    }
    else {
      g_return_if_fail_warning((gchar*)0, (const char*)__func__, 
          "MY_IS_SERIAL (self)");
      return ;
    }
  } while (0);
  MY_SERIAL_GET_IFACE(self)->load(self, fd);
}

static void my_serial_interface_init(MySerialInterface *iface) {
  iface->save = my_serial_save;
  iface->load = my_serial_load;
}

static void my_serial_init(MySerial *self) {
}

static void my_rect_serial_init(MySerialInterface *iface);
static void my_rect_print_init(MyPrintInterface *iface);
typedef struct {
  int width;
  int height;
  char *name;
} MyRectPrivate;
static void my_rect_init(MyRect *self);
static void my_rect_class_init(MyRectClass *klass);
static GType my_rect_get_type_once(void );
static gpointer my_rect_parent_class = (void*)0;
static gint MyRect_private_offset;

static void my_rect_class_intern_init(gpointer klass) {
  my_rect_parent_class = g_type_class_peek_parent(klass);
  if (MyRect_private_offset != 0) g_type_class_adjust_private_offset(klass, &
      MyRect_private_offset);
  my_rect_class_init((MyRectClass*)klass);
}

static inline gpointer my_rect_get_instance_private(MyRect *self) {
  return (gpointer)((guint8*)self + (glong)MyRect_private_offset);
}

GType my_rect_get_type(void ) {
  static gsize static_g_define_type_id = 0;
  if (({
    _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
        "Expression evaluates to false");
    (void)(0? (gpointer)*&static_g_define_type_id: (void*)0);
    !({
      _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
          "Expression evaluates to false");
      typeof(*&static_g_define_type_id)  gapg_temp_newval;
      typeof(&static_g_define_type_id)  gapg_temp_atomic = &
          static_g_define_type_id;
      __atomic_load(gapg_temp_atomic, &gapg_temp_newval, 5);
      gapg_temp_newval;
    }) && g_once_init_enter(&static_g_define_type_id);
  })) {
    GType g_define_type_id = my_rect_get_type_once();
    ({
      _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
          "Expression evaluates to false");
      0? (void)(*&static_g_define_type_id = g_define_type_id): (void)0;
      g_once_init_leave(&static_g_define_type_id, (gsize)g_define_type_id);
    });
  }
  return static_g_define_type_id;
}

static GType my_rect_get_type_once(void ) {
  GType g_define_type_id = g_type_register_static_simple((GType)(20<<2), 
      g_intern_static_string("MyRect"), sizeof(MyRectClass), (GClassInitFunc)(
      void(*)(void ))my_rect_class_intern_init, sizeof(MyRect), (
      GInstanceInitFunc)(void(*)(void ))my_rect_init, (GTypeFlags)0);
  {
    {
      {
        MyRect_private_offset = g_type_add_instance_private(g_define_type_id, 
            sizeof(MyRectPrivate));
      }
      {
        const GInterfaceInfo g_implement_interface_info = {(GInterfaceInitFunc)
            (void(*)(void ))my_rect_print_init, (void*)0, (void*)0};
        g_type_add_interface_static(g_define_type_id, my_print_get_type(), &
            g_implement_interface_info);
      }
      {
        const GInterfaceInfo g_implement_interface_info = {(GInterfaceInitFunc)
            (void(*)(void ))my_rect_serial_init, (void*)0, (void*)0};
        g_type_add_interface_static(g_define_type_id, my_serial_get_type(), &
            g_implement_interface_info);
      }
      ;
    }
  }
  return g_define_type_id;
}

;enum {
  P7_NONE_,
  P7_WIDTH,
  P7_HEIGHT,
  NUM__PROP7,
};
static GParamSpec *obj_properties7[NUM__PROP7] = {(void*)0};
static void my_rect_set_property(GObject *object, guint property_id, const 
    GValue *value, GParamSpec *pspec);
static void my_rect_get_property(GObject *object, guint property_id, GValue *
    value, GParamSpec *pspec);
static void my_rect_dispose(GObject *gobject);
static void my_rect_finalize(GObject *gobject);

static void my_rect_class_init(MyRectClass *klass) {
  GObjectClass *object_class = (GObjectClass*)(void*)g_type_check_class_cast((
      GTypeClass*)klass, (GType)(20<<2));
  object_class->dispose = my_rect_dispose;
  object_class->finalize = my_rect_finalize;
  object_class->set_property = my_rect_set_property;
  object_class->get_property = my_rect_get_property;
  obj_properties7[P7_WIDTH] = g_param_spec_int("width", "Width", 
      "width of rect", 50, 5000, 500, G_PARAM_READWRITE);
  obj_properties7[P7_HEIGHT] = g_param_spec_int("height", "Height", 
      "height of rect.", 30, 3000, 300, G_PARAM_READWRITE);
  g_object_class_install_properties(object_class, NUM__PROP7, obj_properties7);
      
}

static void my_rect_init(MyRect *self) {
  MyRectPrivate *priv = my_rect_get_instance_private(self);
  priv->name = 0;
}

static void my_rect_dispose(GObject *gobject) {
  MyRectPrivate *priv = my_rect_get_instance_private(MY_RECT(gobject));
  do {
    _Static_assert(sizeof(*&priv->name) == sizeof(gpointer), 
        "Expression evaluates to false");
    typeof(&priv->name)  _pp = &priv->name;
    typeof(*&priv->name)  _ptr = *_pp;
    *_pp = (void*)0;
    if (_ptr) g_object_unref(_ptr);
  } while (0);
  ((GObjectClass*)(void*)g_type_check_class_cast((GTypeClass*)
      my_rect_parent_class, (GType)(20<<2)))->dispose(gobject);
}

static void my_rect_finalize(GObject *gobject) {
  MyRectPrivate *priv = my_rect_get_instance_private(MY_RECT(gobject));
  g_free(priv->name);
  ((GObjectClass*)(void*)g_type_check_class_cast((GTypeClass*)
      my_rect_parent_class, (GType)(20<<2)))->finalize(gobject);
}

static void my_rect_set_property(GObject *object, guint property_id, const 
    GValue *value, GParamSpec *pspec) {
  MyRect *self = MY_RECT(object);
  MyRectPrivate *priv = my_rect_get_instance_private(self);
  switch (property_id) {
  case P7_WIDTH:
    priv->width = g_value_get_int(value);
    break;
  case P7_HEIGHT:
    priv->height = g_value_get_int(value);
    break;
  default:
    do {
      GObject *_glib__object = (GObject*)object;
      GParamSpec *_glib__pspec = (GParamSpec*)pspec;
      guint _glib__property_id = property_id;
      g_log((gchar*)0, G_LOG_LEVEL_WARNING, 
          "%s:%d: invalid %s id %u for \"%s\" of type '%s' in '%s'", 
          "(unknown)", 0, "property", _glib__property_id, _glib__pspec->name, 
          g_type_name(((GTypeClass*)((GTypeInstance*)_glib__pspec)->g_class)->
          g_type), g_type_name(((GTypeClass*)((GTypeInstance*)_glib__object)->
          g_class)->g_type));
    } while (0);
    break;
  }
}

static void my_rect_get_property(GObject *object, guint property_id, GValue *
    value, GParamSpec *pspec) {
  MyRect *self = MY_RECT(object);
  MyRectPrivate *priv = my_rect_get_instance_private(self);
  switch (property_id) {
  case P7_WIDTH:
    g_value_set_uint(value, priv->width);
    break;
  case P7_HEIGHT:
    g_value_set_uint(value, priv->height);
    break;
  default:
    do {
      GObject *_glib__object = (GObject*)object;
      GParamSpec *_glib__pspec = (GParamSpec*)pspec;
      guint _glib__property_id = property_id;
      g_log((gchar*)0, G_LOG_LEVEL_WARNING, 
          "%s:%d: invalid %s id %u for \"%s\" of type '%s' in '%s'", 
          "(unknown)", 0, "property", _glib__property_id, _glib__pspec->name, 
          g_type_name(((GTypeClass*)((GTypeInstance*)_glib__pspec)->g_class)->
          g_type), g_type_name(((GTypeClass*)((GTypeInstance*)_glib__object)->
          g_class)->g_type));
    } while (0);
    break;
  }
}

static void my_rect_print_fprint(MyPrint *print, char *name) {
  MyRect *rect = MY_RECT(print);
  printf("rect_fprint(%s)\n", name);
}

static void my_rect_print_init(MyPrintInterface *iface) {
  iface->fprint = my_rect_print_fprint;
}

static void my_rect_serial_load(MySerial *serial, int id) {
  MyRect *self = MY_RECT(serial);
  printf("rect_load %d\n", id);
}

static void my_rect_serial_save(MySerial *serial, int id) {
  MyRect *self = MY_RECT(serial);
  printf("rect_save %d\n", id);
}

static void my_rect_serial_init(MySerialInterface *iface) {
  iface->load = my_rect_serial_load;
  iface->save = my_rect_serial_save;
}

typedef struct {
  int radius;
} MyRRectPrivate;
static void rrect_serial_init(MySerialInterface *iface);
static void rrect_print_init(MyPrintInterface *iface);
static void my_rrect_init(MyRRect *self);
static void my_rrect_class_init(MyRRectClass *klass);
static GType my_rrect_get_type_once(void );
static gpointer my_rrect_parent_class = (void*)0;
static gint MyRRect_private_offset;

static void my_rrect_class_intern_init(gpointer klass) {
  my_rrect_parent_class = g_type_class_peek_parent(klass);
  if (MyRRect_private_offset != 0) g_type_class_adjust_private_offset(klass, &
      MyRRect_private_offset);
  my_rrect_class_init((MyRRectClass*)klass);
}

static inline gpointer my_rrect_get_instance_private(MyRRect *self) {
  return (gpointer)((guint8*)self + (glong)MyRRect_private_offset);
}

GType my_rrect_get_type(void ) {
  static gsize static_g_define_type_id = 0;
  if (({
    _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
        "Expression evaluates to false");
    (void)(0? (gpointer)*&static_g_define_type_id: (void*)0);
    !({
      _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
          "Expression evaluates to false");
      typeof(*&static_g_define_type_id)  gapg_temp_newval;
      typeof(&static_g_define_type_id)  gapg_temp_atomic = &
          static_g_define_type_id;
      __atomic_load(gapg_temp_atomic, &gapg_temp_newval, 5);
      gapg_temp_newval;
    }) && g_once_init_enter(&static_g_define_type_id);
  })) {
    GType g_define_type_id = my_rrect_get_type_once();
    ({
      _Static_assert(sizeof(*&static_g_define_type_id) == sizeof(gpointer), 
          "Expression evaluates to false");
      0? (void)(*&static_g_define_type_id = g_define_type_id): (void)0;
      g_once_init_leave(&static_g_define_type_id, (gsize)g_define_type_id);
    });
  }
  return static_g_define_type_id;
}

static GType my_rrect_get_type_once(void ) {
  GType g_define_type_id = g_type_register_static_simple(my_rect_get_type(), 
      g_intern_static_string("MyRRect"), sizeof(MyRRectClass), (GClassInitFunc)
      (void(*)(void ))my_rrect_class_intern_init, sizeof(MyRRect), (
      GInstanceInitFunc)(void(*)(void ))my_rrect_init, (GTypeFlags)0);
  {
    {
      {
        MyRRect_private_offset = g_type_add_instance_private(g_define_type_id, 
            sizeof(MyRRectPrivate));
      }
      {
        const GInterfaceInfo g_implement_interface_info = {(GInterfaceInitFunc)
            (void(*)(void ))rrect_print_init, (void*)0, (void*)0};
        g_type_add_interface_static(g_define_type_id, my_print_get_type(), &
            g_implement_interface_info);
      }
      {
        const GInterfaceInfo g_implement_interface_info = {(GInterfaceInitFunc)
            (void(*)(void ))rrect_serial_init, (void*)0, (void*)0};
        g_type_add_interface_static(g_define_type_id, my_serial_get_type(), &
            g_implement_interface_info);
      }
      ;
    }
  }
  return g_define_type_id;
}

;enum {
  P8_NONE_,
  P8_RADIUS,
  NUM__PROP8,
};
static GParamSpec *obj_properties8[NUM__PROP8] = {(void*)0};

static void my_rrect_init(MyRRect *self) {
  MyRRectPrivate *priv = my_rrect_get_instance_private(self);
}

static void my_rrect_dispose(GObject *gobject) {
  MyRRectPrivate *priv = my_rrect_get_instance_private(MY_RRECT(gobject));
  ((GObjectClass*)(void*)g_type_check_class_cast((GTypeClass*)
      my_rrect_parent_class, (GType)(20<<2)))->dispose(gobject);
}

static void my_rrect_constructed(GObject *obj) {
  ((GObjectClass*)(void*)g_type_check_class_cast((GTypeClass*)
      my_rrect_parent_class, (GType)(20<<2)))->constructed(obj);
}

static void my_rrect_finalize(GObject *gobject) {
  MyRRectPrivate *priv = my_rrect_get_instance_private(MY_RRECT(gobject));
  ((GObjectClass*)(void*)g_type_check_class_cast((GTypeClass*)
      my_rrect_parent_class, (GType)(20<<2)))->finalize(gobject);
}

static void my_rrect_set_property(GObject *object, guint property_id, const 
    GValue *value, GParamSpec *pspec) {
  MyRRect *self = MY_RRECT(object);
  MyRRectPrivate *priv = my_rrect_get_instance_private(self);
  switch (property_id) {
  case P8_RADIUS:
    priv->radius = g_value_get_int(value);
    break;
  default:
    do {
      GObject *_glib__object = (GObject*)object;
      GParamSpec *_glib__pspec = (GParamSpec*)pspec;
      guint _glib__property_id = property_id;
      g_log((gchar*)0, G_LOG_LEVEL_WARNING, 
          "%s:%d: invalid %s id %u for \"%s\" of type '%s' in '%s'", 
          "(unknown)", 0, "property", _glib__property_id, _glib__pspec->name, 
          g_type_name(((GTypeClass*)((GTypeInstance*)_glib__pspec)->g_class)->
          g_type), g_type_name(((GTypeClass*)((GTypeInstance*)_glib__object)->
          g_class)->g_type));
    } while (0);
    break;
  }
}

static void my_rrect_get_property(GObject *object, guint property_id, GValue *
    value, GParamSpec *pspec) {
  MyRRect *self = MY_RRECT(object);
  MyRRectPrivate *priv = my_rrect_get_instance_private(self);
  switch (property_id) {
  case P8_RADIUS:
    g_value_set_uint(value, priv->radius);
    break;
  default:
    do {
      GObject *_glib__object = (GObject*)object;
      GParamSpec *_glib__pspec = (GParamSpec*)pspec;
      guint _glib__property_id = property_id;
      g_log((gchar*)0, G_LOG_LEVEL_WARNING, 
          "%s:%d: invalid %s id %u for \"%s\" of type '%s' in '%s'", 
          "(unknown)", 0, "property", _glib__property_id, _glib__pspec->name, 
          g_type_name(((GTypeClass*)((GTypeInstance*)_glib__pspec)->g_class)->
          g_type), g_type_name(((GTypeClass*)((GTypeInstance*)_glib__object)->
          g_class)->g_type));
    } while (0);
    break;
  }
}

static void my_rrect_class_init(MyRRectClass *klass) {
  GObjectClass *object_class = (GObjectClass*)(void*)g_type_check_class_cast((
      GTypeClass*)klass, (GType)(20<<2));
  object_class->set_property = my_rrect_set_property;
  object_class->get_property = my_rrect_get_property;
  obj_properties8[P8_RADIUS] = g_param_spec_uint("radius", "Radius", 
      "radius of round", 0, 100, 10, G_PARAM_READWRITE);
  g_object_class_install_properties(object_class, NUM__PROP8, obj_properties8);
      
}

static void my_rrect_print_fprint(MyPrint *print, char *name) {
  MyRRect *self = MY_RRECT(print);
  printf("rrect_fprint(\"%s\")\n", name);
}

static void rrect_print_init(MyPrintInterface *iface) {
  iface->fprint = my_rrect_print_fprint;
}

static void rrect_serial_save(MySerial *object, int fd) {
  MyRRect *rrect = MY_RRECT(object);
  printf("rrect_serial_save\n");
}

static void rrect_serial_load(MySerial *object, int fd) {
  MyRRect *rrect = MY_RRECT(object);
  printf("rrect_serial_load\n");
}

static void rrect_serial_init(MySerialInterface *iface) {
  iface->save = rrect_serial_save;
  iface->load = rrect_serial_load;
}

int main() {
  MyRRect *rrect;
  GValue wid = {0, {{0}}}, hei = {0, {{0}}}, rad = {0, {{0}}};
  int vwid = 100, vhei = 60, vrad = 5;
  rrect = g_object_new(my_rrect_get_type(), "width", vwid, "height", vhei, 
      "radius", vrad, (void*)0);
  my_print_fprint((MyPrint*)rrect, "hello");
  printf("print id = %ld = 0x%lx \n", my_print_get_type(), my_print_get_type());
  printf("serial id = %ld = 0x%lx\n", my_serial_get_type(), my_serial_get_type());
}
