//8- C Program to Generate Multiplication Table "1*3=3, 2*3=6, ..."
#include <stdio.h>
#include <stdlib.h>
void mult (int);
int num;

int main()
{ do{
    printf("\n please enter the number that you want it's multiplication table \n ");
    scanf("%d",&num);
     mult(num);
}
while(num !=0);

    return 0;
}

void mult (int num){
  int mult =1;
//    int num;
 if (num>0 && mult <2000 ){


    for (int i=num; i>1 ; i--){
    mult=mult*i ;
   }
     system("cls");
     printf("\n the multiplication of %d is\n %d",num,mult);
 }
 else{
    printf("error");
 }
}

