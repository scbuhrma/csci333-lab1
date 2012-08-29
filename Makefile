CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic

lab1: lab1.cpp
	$(cc) $(cflags) -o lab1 lab1.cpp
