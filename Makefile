CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -Weffc++

all: clean hello problem2

hello: hello.cpp
	$(CC) $(CFLAGS) -o hello hello.cpp

problem2: problem2.cpp
	$(CC) $(CFLAGS) -o problem2 problem2.cpp

clean:
	rm -rf hello problem2
