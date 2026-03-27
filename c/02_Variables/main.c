#include <stdio.h>
#include <stdbool.h>

int main() {

    // Variable = Allocated space in 
    // memory to store a value.
    // We refer
    // to a variable's name
    // to access the stored value.
    // That variable now behaves as if it was the value it contains. BUT we need to 
    // declare what type of data
    // we are storing.

    // Declaration :
    int x;
    //Intialisation : 
    x = 1;
    // Declaration + intialisation :
    int y = 99;

    // 4 bytes (-2147483648 to +2147483647) = %d
    /*long */int age = 13;

    // 4 bytes (0 to +4294967295) = %u
    unsigned /*long */int k = 4294967295;

    // 2 bytes (-32768 to +32767) = %d
    short/* int*/ h = 32767;

    // 2 bytes (0 to +35535) = %d
    unsigned short/* int*/ i = 65535;

    // 8 bytes (-9 quintillion to +9 quintillion) = %lld
    long long int l = 9922337203685;

    // 8 bytes (0 to +18 quintillion) = %llu
    unsigned long long int m = 18446744073709551615U; 

    // floating point number = %f
    float fpi = 3.141592;

    // double of a float (8 bytes/64 bits/6-7 digits VS 4 bytes/32 bits/15-16 digits) = %lf
    // double dpi = 3.141592653589793;

    // the line "#include <stdbool.h>" is necessary to use booleans. 1 byte (true or false) = %d
    bool coding = true;

    // 1 byte (-128 to +127) = %d for the number or %c for the ASCII character
    /*signed */char f = 100;

    // 1 byte (0 to 255) = %d or %c
    unsigned char g = 255;

    // single character = %c
    char language = 'C';

    // array of characters = %s
    char name[] = "T.S.";

/*     printf("You are %d years old.\n", age);
    printf("Hello %s.\n", name);
    printf("You're learning the %c coding language.\n", language);
    printf("Pi is equal to %f.\n", fpi); */

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

/*     printf("Item 1 : $%.2f\n", item1);
    printf("Item 2 : $%8.2f\n", item2);
    printf("Item 3 : $%-8.2f\n", item3); */

    // Constant = fixed value that cannot be altered by the program during its execution
    const float PI = 3.14159;

/*     printf("%.5f", PI); */

    int a = 7;
    int b = 3;

/*     printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b); */

    // Cette ligne donnera un résultat entier car variables int.
/*     printf("integer a / b = %d\n", a / b); */    
    // On peut également mettre double dans les parenthèses.
/*     printf("floating point a / b = %f\n", a / (float) b);*/
    // L'opérateur modulo sert à donner le reste d'une division.
/*     printf("a %% b = %d\n", a % b); */
    // Ici, a sera déjà incrémenté avant son affichage. 
/*     printf("a++ = %d\n", ++a); */    
    // Alors que là, b est décrémenté après.
/*     printf("b-- = %d\n", b--); */

    int xy = 10;

    xy = xy + 2;
    xy += 2;

    xy = xy - 3;
    xy -= 3;

    xy = xy * 4;
    xy *= 4;

    xy = xy / 5;
    xy /= 5;

    xy = xy % 6;
    xy %= 6;

    printf("%d", xy);

    return 0;
}