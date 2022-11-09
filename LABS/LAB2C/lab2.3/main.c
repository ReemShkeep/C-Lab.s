#include <stdio.h>
#include <stdlib.h>

//C Program to Find the Largest Number Among Three Numbers


int main()
{
    int x,y,z;
    printf("please enter the three numbers you want the largest from them \n " );
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    if (x > y && x > z)
     printf("the largest numbers of the three numbers is \n %d " , x);

    else if (y > x && y > z)
     printf("the largest numbers of the three numbers is \n %d " , y );

    else
        printf("the largest numbers of the three numbers is \n %d " , z );

    return 0;
}
