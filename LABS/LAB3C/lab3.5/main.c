#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    printf("Enter a character \n");
    scanf("%c", &ch);
    printf("%c in uppercase is represented as  %c",ch, toupper(ch));

    return 0;
}
