#include <stdio.h>

void birthday(char x[], int y) {
    printf("\nHappy birthday dear %s !", x);
    printf("\nYou're %d years old !\n", y);
}

int main() {

    char name[] = "Tamir";
    int age = 13;

    birthday(name, age);

    return 0;
}