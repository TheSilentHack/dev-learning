#include <stdio.h>

int main() {

    // 2D Arrays = An array where each element is an array
    // array[][] = {{}, {}, {}};

    // We must declare the number of columns in C.
    int numbers[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9},
                        {10, 11, 12}};

    char numpad[][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'},
                        {'*', '0', '#'}};

    printf("%d ", numbers[0][0]);
    printf("%d ", numbers[0][1]);
    printf("%d ", numbers[0][2]);

    printf("\n");

    printf("%d ", numbers[1][0]);
    printf("%d ", numbers[1][1]);
    printf("%d ", numbers[1][2]);

    printf("\n");

    printf("%d ", numbers[2][0]);
    printf("%d ", numbers[2][1]);
    printf("%d ", numbers[2][2]);

    printf("\n");

    for (int i = 0; i < 4; i++) { // rows
        for (int j = 0; j < 3; j++) { // columns
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }

    return 0;
}