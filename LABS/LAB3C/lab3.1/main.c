#include <stdio.h>
int main () {
    int x ,sum = 0 ;
printf("please enter numbers you want to sum : \n \n");
 scanf("%d",&x);
    while ( sum <= 100 ) {
            printf("please enter again \n \n");
          scanf("%d",&x);
       sum=sum+x;
       // printf ("the sum of added numbers = %d \n ",sum);
     }


    printf ("the number exceeds 100 = %d \n ",sum);


   return 0;
}
