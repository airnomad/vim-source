/* pathdef.c */
/* This file is automatically created by Makefile
 * DO NOT EDIT!  Change Makefile only. */
#include "vim.h"
char_u *default_vim_dir = (char_u *)"/usr/local/share/vim";
char_u *default_vimruntime_dir = (char_u *)"";
char_u *all_cflags = (char_u *)"gcc -c -I. -Iproto -DHAVE_CONFIG_H -DFEAT_GUI_GTK  -pthread -I/usr/include/gtk-2.0 -I/usr/lib/gtk-2.0/include -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/libdrm -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -I/usr/include/freetype2  -I/usr/local/include  -g -O2 -U_FORTIFY_SOURCE -D_FORTIFY_SOURCE=1      ";
char_u *all_lflags = (char_u *)"gcc   -L. -Wl,-O1,--sort-common,--as-needed,-z,relro -fstack-protector -rdynamic -Wl,-export-dynamic  -L/usr/local/lib -Wl,--as-needed -o vim   -lgtk-x11-2.0 -lgdk-x11-2.0 -lpangocairo-1.0 -latk-1.0 -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lpangoft2-1.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lfreetype -lfontconfig  -lSM -lICE -lXpm -lXt -lX11 -lXdmcp -lSM -lICE -lm -lncurses -lnsl   -lacl -lattr -lgpm -ldl     -L/usr/lib/python2.7/config -lpython2.7 -lpthread -ldl -lutil -lm -Xlinker -export-dynamic   -lruby -lpthread -lrt -ldl -lcrypt -lm  -L/usr/lib   ";
char_u *compiled_user = (char_u *)"tomic";
char_u *compiled_sys = (char_u *)"localhost";
