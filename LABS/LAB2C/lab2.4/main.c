#include <stdio.h>
#include <stdlib.h>


//Write a program that reads a student grade percentage and prints "Excellent" if his grade is greater than or equal 85, "Very Good" for 75 or greater; "Good" for 65, "Pass" for 50, "Fail" for less than 50z
int main()
{
    int grade;
    printf("please enter your school grade \n " );
    scanf("%d",&grade);
    if (grade >= 85  )
          printf("Excellent ",grade);
    else  if (grade >= 75 )
           printf("Very Good",grade);
    else  if (grade >= 65 )
           printf("Good",grade);
    else  if (grade >= 50 )
           printf("pass",grade);
    else  if (grade < 50 )
           printf("fail",grade);
    else
        printf("Error you didnot entered a number " );
    return 0;
}
