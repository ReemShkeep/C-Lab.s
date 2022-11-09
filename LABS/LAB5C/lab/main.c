#include <stdio.h>
#include <stdlib.h>

// factorial function
int main()
{
    int mult =1;
    int num;
    printf("please enter the number that you want it's multiplication table \n ");
    scanf("%d",&num);
   // if (num>0){
    for (int i=num; i>1 ; i--){
    mult=mult*i ;
   // scanf ("%d",&mult);
   }
     printf("the multiplication of %d is %d",num,mult);

    return 0;
}
