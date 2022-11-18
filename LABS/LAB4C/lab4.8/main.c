#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    char str[150];

    printf("\nEnter a string : ");
    gets(str);

    for (i = 0; str[i] != '\0'; ++i)
    {
        while (!(
            (str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') ||
            str[i] == '\0'))
        {
            // why when it was i=j wasnt work
            for (j = i; (str[j] != '\0'); ++j)
            {
                str[j] = str[j + 1];
            }

            str[j] = '\0';
        }
    }
    printf("\n the resultant of the sentence is : \t ");
    puts(str);
    return 0;
}
