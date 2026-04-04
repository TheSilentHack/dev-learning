#include <stdio.h>

void symbol_maker();

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

    symbol_maker();

    return 0;
}

void symbol_maker() {

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the number of columns : ");
    scanf("%d", &columns);

    printf("Enter a symbol to use : ");
    scanf(" %c", &symbol);

    for (int i = 0; i < columns; i++) {
        for (int i = 0; i < rows; i++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
}