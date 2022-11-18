#include <stdio.h>
#include <stdlib.h>
#define NULL -32

int main()
{
    char x;
    x = getch();
    printf("please enter any key  \n");

    if (x == NULL)
    {
        system("cls");
        x = getch();
        printf("the key you has entered is %c (an extended key )and its ascii is %d \n", x, x);
    }
    else

    {
        system("cls");
        printf("the key you has entered is  %c (a normal key ) and its ascii is %d \n", x, x);
    }
    return 0;
}