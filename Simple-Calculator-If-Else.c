#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    char op;
    //clrscr();
    printf("\nEnter first number: ");
    scanf("%d",&num1);
    printf("\nEnter second number: ");
    scanf("%d",&num2);
    printf("\nEnter operator (+, -, *, /): ");
    scanf(" %c",&op);
    if(op=='+')
        printf("\nResult: %d",num1+num2);
    else if(op=='-')
        printf("\nResult: %d",num1-num2);
    else if(op=='*')
        printf("\nResult: %d",num1*num2);
    else if(op=='/')
    {
        if(num2!=0)
            printf("\nResult: %d",num1/num2);
        else
            printf("\nError: Division by zero");
    }
    else
        printf("\nInvalid operator");
    getch();
}
