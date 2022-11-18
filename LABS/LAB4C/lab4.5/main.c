#include <stdio.h>
#include <stdlib.h>

// 5 - C Program to Find the Frequency of Characters in a String

int main()
{
    int i, count = 0;
    char str[200], ch;

    printf("\n please enter the statment \n");
    gets(str);
    printf("\n please enter the character you want to know its frequency \n ");
    scanf("%c", &ch);
    //getch(ch);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (ch == str[i])
              count++;
    }
     printf("the %c occures in %d times in %s" ,ch, count, str);
    return 0;
}
