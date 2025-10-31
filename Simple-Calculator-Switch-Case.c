#include<stdio.h>
#include<conio.h>
void main()
{
    int num1, num2, result;
    char op;
    //clrscr();
    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);
    printf("\nEnter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("\nResult: %d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nResult: %d", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nResult: %d", result);
            break;
        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("\nResult: %d", result);
            }
            else
                printf("\nError: Division by zero");
            break;
        case '%':
            if(num2 != 0)
            {
                result = num1 % num2;
                printf("\nResult: %d", result);
            }
            else
                printf("\nError: Division by zero");
            break;
        default:
            printf("\nInvalid operator");
    }
    getch();
}
