#include <stdio.h>

double square(double x) {

    /* double result = x * x; */

    return x * x;
}

int main() {

    double x = square(3.14);
    printf("\n%lf\n", x);

    // return = returns a value back for calling a function
    return 0;
}