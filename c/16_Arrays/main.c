#include <stdio.h>

int main() {

    // Array = A fixed-size collection of elements of the same data type
    // An array is similar to a variable, buit it holds more than one value.

    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char name[] = "TheSilentHack";

    numbers[0] = 100;

    printf("%d\n", numbers[0]);
    printf("%c\n", grades[4]);
    printf("%c\n", name[2]);

    // sizeof() function = Returns the number of bytes that occupies an element

    int size_numbers = sizeof(numbers) / sizeof(numbers[0]);
    int size_grades = sizeof(grades) / sizeof(grades[0]);
    int size_name = sizeof(name) / sizeof(name[0]);

    for (int i = 0; i < size_grades; i++) {
        printf("%c ", grades[i]);
    }

    printf("\n");

    for (int i = 0; i < size_name; i++) {
        printf("%c", name[i]);
    }

    printf("\n");

    for (int i = 0; i < size_numbers; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}