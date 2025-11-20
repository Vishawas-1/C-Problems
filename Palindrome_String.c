#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    // clrscr();
    char str[100];
    int i, count;
    printf("\nEnter a string: ");
    gets(str);
    count = strlen(str) - 1;
    for (i = 0; i < count; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }
    for (i = 0; i < count; i++)
    {
        if (str[i] != str[count])
        {
            printf("\nThe string is not a palindrome.");
            break;
        }
        else
        {
            printf("\nThe string is a palindrome.");
            break;
        }
        count--;
    }
    getch();
    return 0;
}
