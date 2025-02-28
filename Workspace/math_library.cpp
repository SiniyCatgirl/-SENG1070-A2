/*
Programer Name: Trent
Date created:31/01/2025
last updated:27/02/2025
discription:
holds the math functions
*/
#include "math_library.h"
#include <stdio.h>
#include <stdlib.h>


/// <summary>
/// returns the result of two ints 
/// </summary>
/// <param name="a">int to be added to</param>
/// <param name="b">int to be added</param>
/// <returns>the sum of adding the two ints together</returns>
int add(int a, int b) {
    return a + b;
}

/// <summary>
/// returns the result of two ints 
/// </summary>
/// <param name="a">a int to be subtracted from</param>
/// <param name="b">a int to be subtracted</param>
/// <returns>the diffrence of the two ints</returns>
int subtract(int a, int b) {
    return a - b;
}

/// <summary>
/// returns the product of two ints
/// </summary>
/// <param name="a">the int multiplied</param>
/// <param name="b">the int multiplied by</param>
/// <returns>the product of two ints</returns>
int multiply(int a, int b) {
    return a * b;
}

/// <summary>
/// returns the quotent of two ints as a double
/// </summary>
/// <param name="a">the int to be divded</param>
/// <param name="b">the int to be devided by</param>
/// <returns>the quotent of the two ints as a double</returns>
double divide(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        exit(EXIT_FAILURE);
    }
    return (double)a / b;
}