#include<stdio.h>
   void main() {
    char cg;
    printf("input the alphabet:");
    scanf("%s", &cg);

      if (isalpha(cg)){

        printf("Given input is an alphabet.");
        } else { 
         printf("given character is not an alphabet");

        }
   }
