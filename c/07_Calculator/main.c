#include <stdio.h>

int main() {

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /) : ");
    scanf(" %c", &operator);

    printf("\nEnter the first number : ");
    scanf("%lf", &num1);

    printf("\nEnter the second number : ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n%.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n%.2lf", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("\nError : division by 0");
            } else {
                result = num1 / num2;
                printf("\n%.2lf", result);
            }
            break;
        default:
            printf("%c isn't a valid operator. Bye !", operator);
            break;
    }
    return 0;
}