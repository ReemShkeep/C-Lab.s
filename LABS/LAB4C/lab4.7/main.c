#include <stdio.h>
#include <stdlib.h>

    // C Program to Find the Length of a String without Using strlen()
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

// int main()
// {

// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 100
//     // 6) C Program to Find the Length of a String without Using strlen()
//     int str_len(const char *target);
//     int main()
//     {
//         char str[SIZE];
//         int counter = 0;
//         char input = 'i'; // initialize a dummy value

//         printf("Enter a value: ");
//         while (counter < SIZE && 10 != input) // 10 is ASCI for ENTER key
//         {
//             scanf("%c", &input);
//             // will count any thing except ENTER key
//             if (10 != input)
//             {
//                 str[counter] = input;
//                 counter++;
//             }
//         }
//         printf(">>> %d", str_len(str));
//         return 0;
//     }
//     int str_len(const char *target)
//     {
//         // loops until it finds the terminator
//         int counter = 0;
//         while ('\0' != target[counter])
//         {
//             counter++;
//         }
//         return counter;
//     }

// }