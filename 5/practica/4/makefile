CC=clang++
INCDIRS=-I.
OPT=-Og
CFLAGS=-g $(INCDIRS) $(OPT) -Weverything -Wpedantic -std=c++11 -Wno-padded -Wno-c++98-compat -Werror

CFILES=Factura.cpp ReciboDePago.cpp Usuario.cpp test.cpp
OBJECTS=Factura.o ReciboDePago.o Usuario.o test.o

BINARY=test.out

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(BINARY) $(OBJECTS)
