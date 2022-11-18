// #include <stdio.h>
// #include <stdlib.h>

// // C Program to swap 2 integer values. (Swap function, calling by address)

// int main()
// {
//     int x ,y;
//     printf(" This program will swap integers \n please enter the values \n ");
//     printf("where x = \n ");
//     scanf(" %d",&x);
//     printf("and y = ");
//     scanf(" %d",&y);
//     // int *px=&x;
//     // int *py=&y;
//     // swap(px, py);
//      swap(&x, &y);
//    return 0;
// }


// void swap (int x ,int y ){
// int temp;
//     temp = &x ;
//     &x = &y ;
//     &y = temp;
//      printf("\nAfter Swap: x = %d, while  y = %d", x, y);
// }

#include <stdio.h>
#include <stdlib.h>

// C Program to swap 2 integer values. (Swap function, calling by address)

int main()
{
  int x, y;
  printf(" This program will swap integers \n please enter the values \n ");
  printf("where x = \n ");
  scanf(" %d", &x);
  printf("and y = ");
  scanf(" %d", &y);
  // int *px=&x;
  // int *py=&y;
  // swap(px, py);
  swap(&x, &y);
  printf("\nAfter Swap: x = %d, while  y = %d", x, y);

  void swap(int x, int y)
  {
    int temp;
    temp = 0;
    temp = *x;
    x = *y;
    y = temp;
    y = *x;
  }
  return 0;
}
