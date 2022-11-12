
#include <stdio.h>
#include <stdlib.h>

//2) Receive character by character and then place the string terminator upon pressing enter, then display the string.
int main()
{
    char input[200];
    int i ;
    printf("please enter the text :  \n");
    gets(input);
            system("cls");
     printf("you have entered \"%s\" which is \n{", input);
    for(i=0; input[i] != '\0'; i++ ){
            printf(" %c",input[i]);
            }
             printf("}\n \n DONE");

    return 0;
}

