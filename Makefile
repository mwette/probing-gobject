

%.e: %.c
	gcc -E -g -I. `pkg-config --cflags gtk+-3.0` $? -o $@

%.o: %.c
	gcc -c -g -I. `pkg-config --cflags gtk+-3.0` $? -o $@

mydemo: mydemo.o my-rrect.o my-rect.o my-print.o my-serial.o
	gcc -g -o $@ $^ `pkg-config --libs gtk+-3.0`

tree.bin: tree.c
	gcc -g -o $@ $^ `pkg-config --cflags --libs gtk+-3.0`
