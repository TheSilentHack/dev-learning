#include <stdio.h>

int main() {

    int age;

    printf("\nEnter your age : ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("\nYou are now signed up !");
    } else if (age < 0) {
        printf("\nInvalid age.");
    } else if (age >= 130) {
        printf("\nYou're serious !? You're too old to sign up, sorry.");
    } else {
        printf("\nYou must be 18 to sign up.");
    }

    return 0;
}