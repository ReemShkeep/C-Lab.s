// 6 - C Program to Copy String Without Using strcpy()
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[200], copystr[200];
    int i;
    printf("\n please enter the text you want to copy here  ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        copystr[i] = str[i];
    }
    copystr[i] = '\0';
    // puts(str);
    // puts(copystr);
    // or

    printf("the original text is %s", str);
    printf("\n the copied one is %s", copystr);

    return 0;
}
