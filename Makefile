#variables
CC = g++
CFLAGS = -Wall -g -Iinclude

#Regla principal
programa: main.o matecas.o
	$(CC) $(CFLAGS) $^ -o $@

#Reglas de compilacion
main.o: src/main.cpp
	$(CC) $(CFLAGS) -c $<

matecas.o: src/matecas.cpp
	$(CC) $(CFLAGS) -c $<

#Limpieza
clean:
	rm -f *.o programa matecas_app