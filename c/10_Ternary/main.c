#include <stdio.h>

int findMax(int x, int y) {
/*     if (x > y) {
        return x;
    } else {
        return y;
    } */
    return (x > y) ? x : y;
}

int main() {

    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value_if_true : value_if_false

    int max = findMax(3, 4);
    printf("\n%d\n\n", max);

    return 0;
}