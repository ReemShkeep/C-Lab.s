#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("please enter the number \n");
    scanf("%d",&x);
    if (x > 0)
        printf("the returned is positive");
    else if (0 ==x)
        printf("The number is zero");
    else
         printf("The number is negative number ");
    return 0;
}
