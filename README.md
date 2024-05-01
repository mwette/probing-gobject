* Probing GObject

The objective of this project of mine was to understand the underlying
C calls in GObject.  I generated an example application with a few
classes and interface.  I then pasted the files together and parsed with
my C parser to generate a sexp style AST.  Then, I used my C-pretty-printer
(for the sexp AST) to genrerate a C file which contains no CPP macros.

If you ever wanted to know what was under all those CPP macros, here it is.

The file `allinone.c` has the entire program in one .c file.


** Introduction

bla

** Random Notes

* GType

A GType is an integer.  The lower two bits are for TBD.   The value is
right shifted two bits to provide an index into a table of TypeNodes called
static_fundamental_type_nodes.

On my system the maximum number of GTypes is 255.  So, it seems,
GObject is limit to around 200 interfaces.  Seems small, so I must be
missing something.

* Interfaces

Each (registered) interface gets a slot.

I'm a bit lost right now on how gobject finds an interface given a class.

type_lookup_iface_vtable_I seems to be looking for this but the code
(in glib source file gtype.c) is not easily penetrated.
