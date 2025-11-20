#include <stdio.h>
#include <conio.h>
#include <math.h>
void takeInput(int *num)
{
    printf("Enter a number: ");
    scanf("%d", num);
}
int Armstrong(int num)
{
    int temp, rem, sum = 0, count = 0;
    temp = num;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }
    if (sum == num)
        return num;
    else
        return 0;
}
int Prime(int num)
{
    int i, count = 0;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count = 1;
            break;
        }
        else
        {
            count = 0;
            continue;
        }
    }
    return (count == 0);
}
int Reverse(int num)
{
    int rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}
int main()
{
    int num, i, choice;
    // clrscr();
    while (1)
    {
        printf("\nMenu:\n1.Armstrong Numbers\n2.Prime Numbers\n3.Reverse Number\n4.Exit\nEnter your Choice (1-4): ");
        scanf("%d", &choice);
        if (choice == 4)
        {
            printf("Exiting the program...");
            break;
        }
        switch (choice)
        {
        default:
            printf("Invalid Choice! Please try again...");
            break;
        case 1:
            takeInput(&num);
            for (i = 1; i <= num; i++)
            {
                if (Armstrong(i))
                {
                    printf("\n%d", i);
                }
            }
            break;
        case 2:
            takeInput(&num);
            for (i = 2; i <= num; i++)
            {
                if (Prime(i))
                {
                    printf("\n%d", i);
                }
            }
            break;
        case 3:
            takeInput(&num);
            printf("\nReversed Number: %d", Reverse(num));
            break;
        }
    }
    getch();
    return 0;
}
