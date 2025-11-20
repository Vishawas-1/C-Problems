#include <stdio.h>
#include <conio.h>
void input(float *x, float *y)
{
    printf("Enter first number: ");
    scanf("%f", x);
    printf("Enter second number: ");
    scanf("%f", y);
}
int main()
{
    // clrscr();
    float a, b;
    float *num1, *num2;
    int op;
    printf("Enter Opration to be performed:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &op);
    num1 = &a;
    num2 = &b;
    switch (op)
    {
    default:
        printf("Invalid Choice!");
        break;
    case 1:
        input(&a, &b);
        printf("Sum = %.2f", (*num1) + (*num2));
        break;
    case 2:
        input(&a, &b);
        printf("Diffrance = %.2f", (*num1) - (*num2));
        break;
    case 3:
        input(&a, &b);
        printf("Product = %.2f", (*num1) * (*num2));
        break;
    case 4:
        input(&a, &b);
        if ((*num2) == 0)
        {
            printf("Division by zero is not possible.");
        }
        else
        {
            printf("Quotient = %.2f", (*num1) / (*num2));
        }
        break;
    }
    getch();
    return 0;
}
