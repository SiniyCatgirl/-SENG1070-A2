#include "math_library.h"
#include "Logger.h"
#include <assert.h>
#include <stdio.h>
#include <time.h>
#include "test_harness.h"

/*TEST HARNESS TAKEN FROM TESTING EXAMPLES GIVEN IN SLIDE DECK*/
//Positive Tests : Validate correct behavior for typical inputs.
//

//replae assert() with a if else statment? if the result is handled as expected then print the succsess message, lse fint the filed message

void test_add() {
    //positive tests
    assert(add(2, 3) == 5, (logMessage("INFO", "Tests passed succsessflly adding positive ints in", "add"))); // ", logMessage("ERROR", "Test Failled in", "add")" works however it does not print to file
    //logMessage("INFO", "Test passed succsessflly in", "add");
    assert(add(-1, -1) == -2);
    //negative tests
    //assert(add("a", "t") == 213);
    //assert(add(2.3, 1) == 3.3);
    ////boundary tests
    //assert(add(2147483646, 1) == 2147483647, logMessage("INFO", "Tests passed succsessflly", "add"));
    //assert(add(-2147483646, -1) == -2147483647);
    //assert(add(2147483648, 1) == 2147483649);
    //assert(add(-2147483649, -1) == -2147483650);


    logMessage("INFO", "Tests passed succsessflly", "add");
}

void test_subtract() {
    assert(subtract(5, 3) == 2);
    assert(subtract(-1, -1) == 0);
    //negative tests
    //assert(subtract("a", "t") == 19);
    //assert(subtract(2.3, 1) == 1.3);

    ////border tests
    //assert(subtract(-2147483646, 1) == 2147483647);
    //assert(subtract(2147483646, -1) == -2147483647);
    //assert(subtract(-2147483648, 1) == 2147483649);
    //assert(subtract(2147483648, -1) == -2147483650);


    logMessage("INFO", "Tests passed succsessflly", "subtract");
}

void test_multiply() {
    assert(multiply(2, 3) == 6);
    assert(multiply(-1, 5) == -5);
    //negative tests
    //assert(multiply("a", "t") == 213);
    //assert(multiply(2.3, 1) == 3.3);


    ////border tests
    //assert(multiply(2147483647, 5) == 10737418235);
    //assert(multiply(-2147483647, -5) == 10737418235);
    //assert(multiply(2147483647, -5) == -10737418235);
    //assert(multiply(2147483650, 9) == 19327352850);
    //assert(multiply(357913941, 6) == 2147483650);
    //assert(multiply(-2147483650, 9) == -19327352850);
    //assert(multiply(-357913941, 6) == 2147483650);


    logMessage("INFO", "Tests passed succsessflly", "multiply");
}

//figur out how to test division by zero
void test_divide() {
    assert(divide(6, 3) == 2.0);
    assert(divide(5, 2) == 2.5);
    //negative tests
    //assert(divide("a", "t") == 213);
    //assert(divide(2.3, 1) == 3.3);
    //assert(divide(5, 0) == EXIT_FAILURE);


    ////border tests
    //assert(divide(2147483647, 2) == 1073741823.5);
    //assert(divide(2147483647, -2147483647) == -1);
    //assert(divide(2147483647, -2147483650) == -0.9999999986030161);
    //assert(divide(2147483647, 2147483648) == 0.9999999995343387);


    logMessage("INFO", "Tests passed succsessflly", "divide");
}


//other main, rename as testAll?
int testAll(void) {
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
    logMessage("INFO", "Tests passed succsessflly", "");
    return 0;
}