#include <stdio.h>
#include <conio.h>
long int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
long int fibonacci(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
int main()
{
    int num, i;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error: Please enter a non-negative number\n");
        return 1;
    }
    printf("\nFactorial of %d! = %ld", num, factorial(num));
    printf("\nFibonacci of %d = ", num);
    for (i = 0; i < num; i++)
    {
        printf("%ld, ", fibonacci(i));
    }
    getch();
    return 0;
}
