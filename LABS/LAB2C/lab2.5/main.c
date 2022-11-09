#include <stdio.h>
#include <stdlib.h>


int main() {
    // Write C code here
float num1,num2,result=0.0f;
char cal ;
scanf("%f %c %f", &num1, &cal ,&num2);

switch(cal){
case '+' :
result = num1 + num2;
break;
case '-' :
result = num1 - num2;
break;
case '/' :
result = num1 / num2;
break;
case '*' :
result = num1 * num2;
break;
Default:
printf("invalid calculation please enter valid one" );
}

    printf("%.2f %c  %.2f = %.2f ", num1, cal, num2 ,result);
    return 0;
}
