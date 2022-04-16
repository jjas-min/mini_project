CC = gcc
CFLAGS = -W -Wall
TARGET = product
DTARGET = product_debug
OBJECTS = main.c product.o manager.o
ALL : $(TARGET)
$(TARGET) : $(OBJECTS)
        $(CC) $(CFLAGS) -o $@ $^
$(DTARGET) : $(OBJECTS)
        $(CC) $(CFLAGS) -DDEBUG -o $@ $^
clean:
	rm *.0 product product_debug
