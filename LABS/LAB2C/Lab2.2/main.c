#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
    printf("please enter the number \n");
    scanf("%d",&x);
    if (x %2 == 0)
        printf("the returned is even");
    else
        printf("The number is odd");

    return 0;
}
