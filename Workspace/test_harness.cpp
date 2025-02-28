
#include "test_harness.h"
/*TEST HARNESS TAKEN FROM TESTING EXAMPLES GIVEN IN SLIDE DECK*/
/*
Programer Name: Trent
Date created:31/01/2025
last updated:27/02/2025
discription:
run the tests for the program
*/
//Positive Tests : Validate correct behavior for typical inputs.
//

//replae assert() with a if else statment? if the result is handled as expected then print the succsess message, lse fint the filed message

/// <summary>
/// used to run tests for the add function
/// </summary>
void test_add() {
    //positive tests
    assert(add(2, 3) == 5); // ", logMessage("ERROR", "Test Failled in", "add")" works however it does not print to file
    logMessage("INFO", "Tests passed succsessflly adding positive ints in", "add");
    //logMessage("INFO", "Test passed succsessflly in", "add");
    assert(add(-1, -1) == -2);
    logMessage("INFO", "Tests passed succsessflly adding negative ints in", "add");
    //negative tests
    //assert(add("a", "t") == 213);
    //assert(add(2.3, 1) == 3.3);
    ////boundary tests
    assert(add(2147483646, 1) == 2147483647);
    logMessage("INFO", "Tests passed succsessflly adding positive ints near positive max value in", "add");
    assert(add(-2147483646, -1) == -2147483647);
    logMessage("INFO", "Tests passed succsessflly adding Negative ints near Negative max value in", "add");
    //assert(add(2147483648, 1) == 2147483649);
    //assert(add(-2147483649, -1) == -2147483650);


    logMessage("INFO", "Tests passed succsessflly", "add");
}

/// <summary>
/// used to run tests for the subtract function
/// </summary>
void test_subtract() {
    assert(subtract(5, 3) == 2);
    logMessage("INFO", "Tests passed succsessflly subtracting positive ints in", "subtract");
    assert(subtract(-1, -1) == 0);
    logMessage("INFO", "Tests passed succsessflly subtracting negative ints in", "subtract");
    //negative tests
    //assert(subtract("a", "t") == 19);
    //assert(subtract(2.3, 1) == 1.3);

    ////border tests
    assert(subtract(-2147483647, 1) == -2147483648);
    logMessage("INFO", "Tests passed succsessflly subtracting positive ints near positive max value in", "subtract");
    assert(subtract(2147483646, -1) == 2147483647);
    logMessage("INFO", "Tests passed succsessflly subtracting Negative ints near Negative max value in", "subtract");
    //assert(subtract(-2147483648, 1) == 2147483649);
    //assert(subtract(2147483648, -1) == 2147483649);


    logMessage("INFO", "Tests passed succsessflly", "subtract");
}

/// <summary>
/// used to run tests for the multiply function
/// </summary>
void test_multiply() {
    assert(multiply(2, 3) == 6);
    logMessage("INFO", "Tests passed succsessflly multiplying positive ints in", "multiply");
    assert(multiply(-1, 5) == -5);
    logMessage("INFO", "Tests passed succsessflly multiplying Negative ints in", "multiply");
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

/// <summary>
/// used to run tests for the divide function
/// </summary>
void test_divide() {
    assert(divide(6, 3) == 2.0);
    logMessage("INFO", "Tests passed succsessflly divide positive ints in", "divide");
    assert(divide(5, 2) == 2.5);
    logMessage("INFO", "Tests passed succsessflly divide positive ints resulting in a decimel in", "divide");
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



/// <summary>
/// used to run tests for the divide function
/// </summary>
/// <returns></returns>
int testAll() {
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
    logMessage("INFO", "Tests passed succsessflly", "");
    return 0;
}