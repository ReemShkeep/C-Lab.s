#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


 typedef struct employee {
char name[20];
int id;
float salary;
float bonus;
float deduction;
 }employee;

int main()
{
    employee emp[SIZE];
    int i =0;
for(i=0 ; i<SIZE; i++){
printf("\n enter the id of the employee : %d",i);
scanf("%d",&emp[i].id);
printf("enter the name of the employee is: %s",i);
scanf("%s",emp[i].name);
printf("enter the salary of the employee is %.2f \n ",i);
scanf("%f",&emp[i].salary);
printf("enter the bonus of the employee is %.2f \n ",i);
scanf("%f",&emp[i].bonus);
printf("enter the monthly dedcuted of the employee is %.2f \n ",i);
scanf("%f",&emp[i].deduction);
system("cls");
printf("user has been created its name is %s \n with id: %d \n and its salary is %.2f \n expected bonus is %.1f\n and deducted amount is %.1f \n ", emp[i].name,emp[i].id ,emp[i].salary,emp[i].bonus ,emp[i].deduction );
system("cls");

}


    return 0;


}
