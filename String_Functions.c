#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    // clrscr();
    char str1[100], str2[100];
    int op, count, n;
    while (1)
    {
        printf("\n\nString Operations!");
        printf("\n1.Calculate length of a string\n2.Concatenate at the end of a given\n3.Copy one string to another\n4.Compare contents of two strings\n5.Copy nth character string to another\n6.Exit\nSelect Operation (1-6): ");
        scanf("%d", &op);
        if (op == 6)
        {
            printf("\nExiting the programe...");
            break;
        }
        fflush(stdin);
        switch (op)
        {
        case 1:
            printf("\nEnter a String: ");
            gets(str1);
            printf("\nLength of %s = %d", str1, strlen(str1));
            break;
        case 2:
            printf("\nEnter first String: ");
            gets(str1);
            printf("\nEnter second string: ");
            gets(str2);
            printf("\n%s", strcat(str1, str2));
        case 3:
            printf("\nEnter a String: ");
            gets(str1);
            strcpy(str2, str1);
            printf("\nCopyed text = %s", str2);
        case 4:
            printf("\nEnter first String: ");
            gets(str1);
            printf("\nEnter second string: ");
            gets(str2);
            printf("\nCompare of %s and %s = %d", str1, str2, strcmp(str1, str2));
        case 5:
            printf("\nEnter a String: ");
            gets(str1);
            printf("\nEnter number of charactors, you want to copy: ");
            scanf("%d", &n);
            printf("\nCopyed charactor of %s = %s", str1, strncpy(str2, str1, n));
        default:
            printf("\nChose Crroct Opration!");
            break;
        }
    }
    getch();
    return 0;
}
