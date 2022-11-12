#include <stdio.h>
#include <stdlib.h>
// 3) C Program to take firstName and lastName from user, then displays fullName.

int main()
{
    char x[50], y[50];
    printf("please enter your first name : \n");
     scanf("%s",&x);
    printf("please enter your second name :\n");
    scanf("%s",&y);

    system("cls");
    printf(" Your FullName is : %s %s  \n", x,y);


    return 0;
}
