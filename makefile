CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Ziel: Das ausführbare Programm
my_program: main.o ft_atoi.o
    $(CC) $(CFLAGS) -o my_program main.o ft_atoi.o

# Regel: Kompiliere main.c zu main.o
main.o: main.c
    $(CC) $(CFLAGS) -c main.c

# Regel: Kompiliere ft_atoi.c zu ft_atoi.o
ft_atoi.o: ft_atoi.c
    $(CC) $(CFLAGS) -c ft_atoi.c

# Regel: Bereinige Objektdateien und das ausführbare Programm
clean:
    rm -f *.o my_program