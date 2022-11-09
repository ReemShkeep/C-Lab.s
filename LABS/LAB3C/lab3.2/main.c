#include <stdio.h>
#include <stdlib.h>
int x=0 ;
//char c ;


int main()

 {

    printf("which greeting you want to listen \n choose one\n\n ");
    printf("1. good morning \n \n");
    printf("2. good evening \n \n");
    printf("3. good night \n \n");
     printf("Select any other button to exit \n");
   // printf("Select ESC for exit to go back main menu \n");


     scanf("%d",&x);
    switch(x){
        x=getch();
//        c=getch();
    case 1:
        system ("cls");
        scanf("1",&x);
        printf("good morning \n \n");

    printf("Select any other button to exit \n");


        break;

    case 2:
   system ("cls");
   scanf("2",&x);
    printf(" good evening \n \n");
     printf("Select any other button to exit \n");

  //  printf("Select ESC for exit to go back main menu \n");
    break;

    case 3:
         system ("cls");
         scanf("3",&x);
    printf("good night \n \n");
     printf("Select any other button to exit \n");

 //   printf("Select ESC for exit to go back main menu \n");
    break;
/*

    case 27:

    system("cls");
    printf("which greeting you want to listen \n choose one\n\n ");
    printf("1. good morning \n \n");
    printf("2. good evening \n \n");
    printf("3. good night \n \n");
    printf("Select ESC for exit to go back main menu \n");
       break;
       */



default:
 system("cls");
 printf("Error\n");
break;
        }
/*
    while (c != 13);
    return 0;
    */
}




