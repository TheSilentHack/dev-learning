#include <stdio.h>

// The following line is to use on Windows.
/*
#include <windows.h>
*/
// The following line is to use on Linux/macOS.
#include <unistd.h>

int main() {

    // for loop = Repeat some code a limited number of times
    // for (Initialisation; Condition; Update)

    /*
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    for (int i = 2; i <= 10; i+=2) {
        printf("%d\n", i);
    }

    for (int i = 1; i <= 10; i+=3) {
        printf("%d\n", i);
    }

    for (int i = 10; i > 0; i--) {
        printf("%d\n", i);
    }

    for (int i = 10; i > 0; i-=2) {
        printf("%d\n", i);
    }
    */

    for (int i = 10; i> 0; i--) {
        sleep(1);
        // For Windows use instead :
        /*
        Sleep(1000);
        */
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR !");

    return 0;
}