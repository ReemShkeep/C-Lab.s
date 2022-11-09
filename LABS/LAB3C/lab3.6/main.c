
#include <stdio.h>
#include <stdlib.h>
int cube(int num);

int main()
{
    int num;
    int c;

    printf("Please enter a number \n");
    scanf("%d", &num);
    c = cube(num);
    printf("Cube of %d is %d", num, c);
    return 0;
}

int cube(int num)
{
    int c = num * num * num;
    return c;
}
