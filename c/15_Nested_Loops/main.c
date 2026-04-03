#include <stdio.h>

int main() {

    // Without nested loops
    /*
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    */

    // With nested loops
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    // Other nested loops : multiplication table
    for (int k = 1; k < 10; k++) {
        for (int l = 1; l <= 10; l++) {
            printf("%3d ", k * l);
        }
        printf("\n");
    }

    return 0;
}