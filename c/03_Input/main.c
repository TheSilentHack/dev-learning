#include <stdio.h>
#include <string.h>

int main() {

    char name[25]; // 25 bytes array
    int age;
    
    printf("\nWhat's your name ?");
    // scanf() does not support white spaces
    /* scanf("%s", name); */
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("\nHow old are you ?");
    scanf("%d", &age);

    printf("\nHello %s.", name);
    printf("\nYou are %d years old.", age);

    return 0;
}