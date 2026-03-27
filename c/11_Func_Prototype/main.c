#include <stdio.h>
#include <stdbool.h>

// function prototypes
void hello(char[], int);
bool ageCheck(int age);

int main() {

    char name[] = "Tamir";
    int age = 13;

    hello(name, age);

    if ageCheck(14) {
        printf("You are 13 years old !")
    } else {
        printf("You aren't 13 years old !")
    }

    // function prototype = function declaration, without body, before main()
    // Ensures that calls to a function are made with the correct arguments
    // A function prototype provides information about a function's name,
    // return type and parameters before its actual definition.
    // It enables type checking and allows functions to be used before they're defined.
    // It improves readability, organisation and helps prevent errors.
    // It's considered good practice using function prototypes.

    // Many C Compilers do not check parameter matching.
    // Missing arguments will result in a unexpected behaviour.
    // A function prototype causes the compiler to flag an argument if arguments are missing.

    // ADVANTAGES : 
    // 1. Easier to navigate a program w/ main() at the top.
    // 2. Helps with debugging.
    // 3. Commonly used in header files.
    
    return 0;
}

void hello(char name[], int age) {

    printf("\nHello %s, you're %d years old.\n", name, age);
    
}

bool ageCheck(int age)
{
/*    if (age >= 15) {
*        return true;
*    } else {
*        return false;
*    }*/
    return age >= 15;
}