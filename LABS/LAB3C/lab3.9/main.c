
#include <stdio.h>
#include <stdlib.h>

int main() {
    char x=0;
   int countChar=0,countWord=0;
    while (x != '\n'){
     x=getchar();
     countChar++;
     printf("the count of the character is %d ");
     if (x = ' '){

     countWord++;
     countChar--;
     }
     else if ( x == '\n'){
            countWord++;
            }
     else{
         printf("please enter any character to count");

}

    printf("Number of characters : %d \n", countChar-1);
    printf("Number of words: %d ", countWord);
 return 0;
}
}
