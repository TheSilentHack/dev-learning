#include <stdio.h>

int main() {

    // break = break out of a loop (STOP).
    // continue = skip current cycle of a loop (SKIP).

    for (int i = 1; i <= 10; i++) {

        if (i == 4) {
            continue; // it will skip the number 4
        }

        if (i == 9) {
            break; // it will stop at 8, won't display 9
        }

        printf("%d\n", i);
    }

    return 0;
}
