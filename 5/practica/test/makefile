CC=clang++
INCDIRS=-I.
OPT=-Og
CFLAGS=-g $(INCDIRS) $(OPT) -Weverything -Wpedantic -std=c++11 -Wno-padded -Wno-c++98-compat

CFILES=Figura.cpp Circulo.cpp Rectangulo.cpp RectRedondo.cpp test.cpp
OBJECTS=Figura.o Circulo.o Rectangulo.o RectRedondo.o test.o

BINARY=bin

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(BINARY) $(OBJECTS)
