* Probing GObject

The objective of this project of mine was to understand the underlying
C calls in GObject.  I generated an example application with a few
classes and interface.  I then pasted the files together and parsed with
my C parser to generate a sexp style AST.  Then, I used my C-pretty-printer
(for the sexp AST) to genrerate a C file which contains no CPP macros.

If you ever wanted to know what was under all those CPP macros, here it is.


