CC=clang++
INCDIRS=-I.
OPT=-Og
CFLAGS=-g $(INCDIRS) $(OPT) -Weverything -Wpedantic -std=c++11 -Wno-padded -Wno-c++98-compat

CFILES=Cuenta.cpp CuentaCorriente.cpp CajaAhorro.cpp Banco.cpp test.cpp
OBJECTS=Cuenta.o CuentaCorriente.o CajaAhorro.o Banco.o test.o

BINARY=test.out

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(BINARY) $(OBJECTS)
