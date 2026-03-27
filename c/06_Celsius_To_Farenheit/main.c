#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("\nIs the temperature in (C) or in (F) ? : ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C') {
        printf("\nEnter the temperature in Celsius : ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5 ) + 32;
        printf("The temperature in Fahrenheit is %.1f.", temp);
    } else if (unit == 'F') {
        printf("\nEnter the temperature in Fahrenheit : ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in Celsius is %.1f.", temp);
    } else {
        printf("\n%c isn't a temperature measurement unit.", unit);
    }

    return 0;
}