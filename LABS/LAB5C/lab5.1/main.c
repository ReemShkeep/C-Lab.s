#include <stdio.h>
#include <stdlib.h>
struct employee {
char name[20];
int id;
float salary;
float bonus;
float deduction;
 };
 typedef struct employee employee;

int main()
{
    employee emp1= {"Reem",1,8096,2000,-500};
    employee emp2= {"yusrii",256789,4096,1000,-500};
    employee emp3= {"salma",5261,8096,2000,-500};
    employee emp4= {"careem",9623,5096,2000,-500};
    employee emp5= {"nour",54563,8096,2000,-500};
    printf("\n 1st employee where its code is: %d, its name is: %s and its salary is %.2f \n ",emp1.id,emp1.name,emp1.salary);
    printf("2nd employee where its code is: %d, its name is: %s and its salary is %.2f \n ",emp2.id,emp2.name,emp2.salary);
    printf("3rd employee where its code is: %d, its name is: %s and its salary is %.2f \n ",emp3.id,emp3.name,emp3.salary);
    printf("4th employee where its code is: %d, its name is: %s and its salary is %.2f \n ",emp4.id,emp4.name,emp4.salary);
    printf("5th employee where its code is: %d, its name is: %s and its salary is %.2f \n ",emp5.id,emp5.name,emp5.salary);



    return 0;


//notes
//emp1.id,emp1.name,emp1.salary
// struct employee {
// char name[20];
// int id;
// float salary;
// float bonus;
// float deduction;
//  }employee1;   kda m3naha b3ml mn l table employee , mowazf mnhum

}
