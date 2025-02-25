#include "arithmetic.h"
#include "Logging.h"
#include <assert.h>
#include <stdio.h>
#include <time.h>

/*TEST HARNESS TAKEN FROM TESTING EXAMPLES GIVEN IN SLIDE DECK*/

void test_add() {
    const char kLevel[] = "ERROR";
    const char kMessage[] = "Failed adding positive Numbers in ";
    const char kFunction[] = "add";
    assert(add(2, 3) == 5);
    assert(add(-1, -1) == -2);
    printf("test_add passed!\n");
    logMessage("ERROR", "Failed adding positive numbers in ", "add");
}

void test_subtract() {
    assert(subtract(5, 3) == 2);
    assert(subtract(-1, -1) == 0);
    printf("test_subtract passed!\n");
}

void test_multiply() {
    assert(multiply(2, 3) == 6);
    assert(multiply(-1, 5) == -5);
    printf("test_multiply passed!\n");
}

//figur out how to test division by zero
void test_divide() {
    assert(divide(6, 3) == 2.0);
    assert(divide(5, 2) == 2.5);
    printf("test_divide passed!\n");
}


//other main, rename as testAll?
int main(void) {
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
    printf("All tests passed!\n");
    return 0;
}