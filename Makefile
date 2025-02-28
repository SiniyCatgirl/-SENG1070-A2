CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: test_harness cunit_tests

math_library.o: math_library.c math_library.h
	$(CC) $(CFLAGS) -c math_library.c

# Test harness target
test_harness: test_harness.c math_library.o
	$(CC) $(CFLAGS) -o test_harness test_harness.c math_library.o

# CUnit test target
cunit_tests: cunit_tests.c math_library.o
	$(CC) $(CFLAGS) -o cunit_tests cunit_tests.c math_library.o -lcunit

# Clean up build files
clean:
	rm -f *.o test_harness cunit_tests