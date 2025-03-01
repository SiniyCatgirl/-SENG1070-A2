CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: test_harness cunit_tests main

math_library.o: math_library.c math_library.h
	$(CC) $(CFLAGS) -c math_library.c

# Test harness target
test_harness: test_harness.c math_library.o
	$(CC) $(CFLAGS) -o test_harness test_harness.c math_library.o

#main
main: test_harness.c math_library.o
	$(CC) $(CFLAGS) -o main test_harness.c math_library.o

# Clean up build files
clean:
	rm -f *.o test_harness cunit_tests main