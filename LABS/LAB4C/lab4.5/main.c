#include <stdio.h>
#include <stdlib.h>

// 5 - C Program to Find the Frequency of Characters in a String

int main()
{
    int i, count = 0;
    char str[100], ch;

    printf("please enter the statment");
    gets(str);
    printf("please enter the character you want to know its frequency");
    gets(ch);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (ch = str[i])
            count++;
    }
    printf("the %c occures in %d times in %s" ch, count, str);

    return 0;
}
