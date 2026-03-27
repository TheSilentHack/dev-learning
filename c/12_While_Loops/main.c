#include <stdio.h>
#include <string.h>

int main() {

   // while loops : continue some code WHILE the condition remains true.
   //               Condition must be true for us to enter the while loop.

   int number = 0;

   while (number <= 0) {
      printf("Enter a number greater than 0 : ");
      scanf("%d", &number);
   }

   number = 1

   do {
      printf("Enter a number greater than 0: ");
      scanf("%d", &number);
   } while (number <= 0);


   char name[50] = "";

   printf("Enter your name : ");
   fgets(name, sizeof(name), stdin);
   name[strlen-1] = '\0';

   while (strlen(name) == 0) {
      printf("Name cannot be empty ! Please enter your name : ");
      fgets(name, sizeof(name), stdin);
      name[strlen(name)-1] = '\0';
   }

   print("Hello %s !", name);

   bool isRunning = true;
   char response = '\0';

   while (isRunning) {
      printf("You are plaing a game !");
      printf("Would you like to continue ? [y/n] ");
      scanf(" %c", response);

      response = tolower(response);
      // If the previous line was omitted, the condition
      // of the if clause will have became :
      // if (response != 'Y' && response != 'y') {}

      if (response != 'y') {
         isRunning = false;
      }
   }

   printf("You have exited the game !");

   return 0;
}