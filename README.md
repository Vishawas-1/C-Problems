# C Programs Collection

This repository contains a collection of basic to intermediate C programs. Each section includes a short description and the corresponding source code.

## main.c

**Description:** This program demonstrates how to main using C.

```c
#include <stdio.h>
#include <conio.h>
int main()
{
    //clrscr();  //only for turbo C/C++ users
    printf("Hello World!");
    getch();
    return 0;
}

```

## Avg-Using-Array.c

**Description:** This program demonstrates how to avg using array using C.

```c
#include<stdio.h>
#include<conio.h>
int main()
{
    float marks[50],sum=0,avg;
    int i;
    //clrscr();
    for(i=0;i<50;i++)
    {
        printf("\nEnter Marks of Student %d (in %%): ",i+1);
        scanf("%f",&marks[i]);
        sum=sum+marks[i];
    }
    avg=sum/50;
    printf("\nAverage of 50 Student = %.2f",avg);
    getch();
    return 0;
}

```

## Celsius-to-Fahrenheit.c

**Description:** This program demonstrates how to celsius to fahrenheit using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	float tc,tf;
	//clrscr();  //only for turbo C/C++ users
	printf("\nEnter temperature in celsius: ");
	scanf("%f",&tc);
	tf=(float)9/(float)5*tc+32;
	printf("\n%.2f Celsius = %2.f Fahrenheit.",tc,tf);
  getch();
}

```

## Convert-Case-U-L&L-U.c

**Description:** This program demonstrates how to convert case u l&l u using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	//clrscr();
	printf("\nEnter a character: ");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122)
	{
		ch=ch-32;
		printf("\nThe uppercase character is: %c",ch);
	}
	else if(ch>=65 && ch<=90)
	{
		ch=ch+32;
		printf("\nThe lowercase character is: %c",ch);
	}
	else
	{
		printf("\nInvalid Input!");
	}
	getch();
}

```

## Factorial-Fibonacci-Using-Recursive.c

**Description:** This program demonstrates how to factorial fibonacci using recursive using C.

```c
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

```

## Find-Alphabet-Number-Symbol.c

**Description:** This program demonstrates how to find alphabet number symbol using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	//clrscr();
	printf("\nEnter a character: ");
	scanf("%c",&ch);
	if(ch>=96 && ch<=122 || ch>=65 && ch<=90)
	{
		printf("\n%c is Alphabet.",ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\n%c is number.",ch);
	}
	else
	{
		printf("\n%c is symbol.",ch);
	}
	getch();
}

```

## Find-Electricity-Bill.c

**Description:** This program demonstrates how to find electricity bill using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	float unit,amt=0;
	//clrscr();
	printf("\nEnter your bill in units: ");
	scanf("%f",&unit);
	if(unit<=100)
	{
		amt=unit*2;
	}
	else if(unit>100 && unit<=200)
	{
		amt=(unit-100)*3+(100*2);
	}
	else if(unit>200 && unit<=300)
	{
		amt=(unit-200)*4+(100*3)+(100*2);
	}
	else
	{
		amt=(unit-300)*5+(100*4)+(100*3)+(100*2);
	}
	printf("\nYour Bill = %.2f\nYour Bill Amount = Rs.%.2f",unit,amt);
	getch();
}

```

## Find-Number-In-Array.c

**Description:** This program demonstrates how to find number in array using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100],n,i,j,num,temp,found=0;
    //clrscr();
    printf("\nEnter no. of element in this array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the no. to search: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            printf("\nNumber %d is found on position %d",num,i+1);
            found=1;
        }
    }
    if (found!=1)
    {
        printf("\nNumber %d is not found in this array.",num);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nShorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    getch();
}

```

## Find-Odd-Even.c

**Description:** This program demonstrates how to find odd even using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	//clrscr();
	printf("\nEnter a number: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n%d is even.",num);
	}
	else
	{
		printf("\n%d is odd",num);
	}
	getch();
}

```

## Grade-Calculator.c

**Description:** This program demonstrates how to grade calculator using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	//clrscr();
	printf("\nEnter your marks in percentage(Without %): ");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("\nYour grade is A+");
	}
	else if(marks>=80)
	{
		printf("\nYour grade is A");
	}
	else if(marks>=75)
	{
		printf("\nYour marks is B+");
	}
	else if(marks>=50)
	{
		printf("\nYour marks is B");
	}
	else if(marks>=33)
	{
		printf("\nYour marks is C");
	}
	else
	{
		printf("\nYour are fail.");
	}
	getch();
}

```

## Largest-among-three-numbers.c

**Description:** This program demonstrates how to largest among three numbers using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	//clrscr();
	printf("\nEnter three numbers:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	{
		printf("\n%d is Large.",n1);
	}
	else if(n2>n1 && n2>n3)
	{
		printf("\n%d is Large.",n2);
	}
	else
	{
		printf("\n%d is Large.",n3);
	}
	getch();
}

```

## Matrix-Add-Multiply-Reverse-2D-Array.c

**Description:** This program demonstrates how to matrix add multiply reverse 2d array using C.

```c
#define MAX 100
#include <stdio.h>
#include <conio.h>
// Get number of rows and columns
void rowcol(int *r, int *c)
{
    printf("Enter no. of rows: ");
    scanf("%d", r);
    printf("Enter no. of columns: ");
    scanf("%d", c);
}
// Get elements of first matrix
void matrix1(int a[MAX][MAX], int r, int c)
{
    int i, j;
    printf("Enlement of first matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Element of first matrix is: [%d][%d]: ", (i + 1), (j + 1));
            scanf("%d", &a[i][j]);
        }
    }
}
// Get elements of second matrix
void matrix2(int b[MAX][MAX], int r, int c)
{
    int i, j;
    printf("Enlement of second matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Element of second matrix is: [%d][%d]: ", (i + 1), (j + 1));
            scanf("%d", &b[i][j]);
        }
    }
}
// Add two matrices
void matrixadd(int a[MAX][MAX], int b[MAX][MAX], int sum[MAX][MAX], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of two matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
// Get rows and columns for multiplication
void multrowcol(int *r1, int *c1, int *r2, int *c2)
{
    printf("Enter dimensions for first matrix:\n");
    rowcol(r1, c1);
    printf("Enter dimensions for second matrix:\n");
    rowcol(r2, c2);
}
// Multiply two matrices
void matrixmultiply(int a[MAX][MAX], int b[MAX][MAX], int product[MAX][MAX], int r1, int c1, int r2, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            product[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Product of two matrix is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
}
// Transpose of a matrix
void matrixtranspose(int a[MAX][MAX], int trans[MAX][MAX], int r, int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            trans[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
}
// Main function
void main()
{
    int a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX], product[MAX][MAX], r1, c1, r2, c2, i, j, choice;
    //clrscr();
    // Menu-driven program
    while (1)
    {
        printf("Menu:\n1. Matrix Addition\n2. Matrix Multiplication\n3. Matrix Transpose\n4. Exit\nEnter your choice(1-4): ");
        scanf("%d", &choice);
        if (choice == 4)// Exit condition
        {
            printf("Exiting the program...\n");
            break;
        }
        switch (choice)// Switch case for menu options
        {
        default:// Invalid choice
            printf("Invalid choice!\nPlease select a valid option (1-4).");
            break;
        case 1:// Matrix addition
            rowcol(&r1, &c1);// Get rows and columns
            matrix1(a, r1, c1);// Get first matrix
            matrix2(b, r1, c1);// Get second matrix
            matrixadd(a, b, sum, r1, c1);// Add matrices
            break;
        case 2:// Matrix multiplication
            multrowcol(&r1, &c1, &r2, &c2);// Get rows and columns for multiplication
            if (c1 != r2)// Check if multiplication is possible
            {
                printf("Matrix multiplication not possible\n");
            }
            else
            {
                matrix1(a, r1, c1);// Get first matrix
                matrix2(b, r2, c2);// Get second matrix
                matrixmultiply(a, b, product, r1, c1, r2, c2);// Multiply matrices
            }
            break;
        case 3:// Matrix transpose
            rowcol(&r1, &c1);// Get rows and columns
            matrix1(a, r1, c1);// Get matrix
            matrixtranspose(a, sum, r1, c1);// Transpose matrix
            break;
        }
    }
    getch();
}

```

## Menu-Driven-AN-Prime-Reverse.c

**Description:** This program demonstrates how to menu driven an prime reverse using C.

```c
#include<stdio.h>
#include<conio.h>
#include<math.h>
void takeInput(int *num)
{
    printf("Enter a number: ");
    scanf("%d",num);
}
int Armstrong(int num)
{
    int temp,rem,sum=0,count=0;
    temp=num;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp=temp/10;
    }
    if(sum==num)
        return num;
    else
        return 0;
}
int Prime(int num)
{
    int i,count=0;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            count=1;
            break;
        }
        else
        {
            count=0;
            continue;
        }
    }
    return (count==0);
}
int Reverse(int num)
{
    int rev=0,rem;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}
int main()
{
    int num,i,choice;
    //clrscr();
    while(1)
    {
        printf("\nMenu:\n1.Armstrong Numbers\n2.Prime Numbers\n3.Reverse Number\n4.Exit\nEnter your Choice (1-4): ");
        scanf("%d",&choice);
        if(choice==4)
        {
            printf("Exiting the program...");
            break;
        }
        switch(choice)
        {
            default:
            printf("Invalid Choice! Please try again...");
            break;
            case 1:
                takeInput(&num);
                for(i=1;i<=num;i++)
                {
                    if(Armstrong(i))
                    {
                        printf("\n%d",i);
                    }
                }
                break;
            case 2:
                takeInput(&num);
                for(i=2;i<=num;i++)
                {
                    if(Prime(i))
                    {
                        printf("\n%d",i);
                    }
                }
                break;
            case 3:
                takeInput(&num);
                printf("\nReversed Number: %d",Reverse(num));
                break;
        }
    }
    getch();
    return 0;
}

```

## Menu-Driven-Calculator.c

**Description:** This program demonstrates how to menu driven calculator using C.

```c
#include<stdio.h>
#include<conio.h>
void main(){
	float num1=0,num2=0,per=0,result=0;
	int choice,total,n,i;
	//clrscr();
	while(1)
	{
		 printf("\n\nMenu Driven Calculetor!");
		 printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Average\n6.Persentage\n7.Exit");
		 printf("\nEnter your choice from (1-7): ");
		 scanf("%d",&choice);
		 if(choice==7)
		 {
			  printf("\nExiting the program!\nTry again later...");
			  break;
		 }
		 else if(choice==6)
		 {
			  printf("\nEnter obtened marks: ") ;
			  scanf("%f",& num1);
			  printf("\nEnter total marks: ");
			  scanf("%d",& total);
			  if(total==0)
			  {
				   printf("\nTotal can't be zero!\nTry again...");
			  }
			  else
			  {
				  per=(num1/total)*100;
				  printf("\nPercentage = %.2f%%",per);
			  }
		 }
		 else if(choice==5)
		 {
			 printf("\nHow many numbers do you want to find the average of: ");
			 scanf("%d",&n);
			 for(i=1;i<=n;i++)
			 {
				 printf("\nEnter the number %d: ",i);
				 scanf("%f",&num1);
				 num1=num1+num2;
				 num2=num1;
			 }
			 result=num1/n;
			 printf("\nAverage = %.2f",result);
		 }
		 else
		 {
			 printf("\nEnter first number: ");
			 scanf("%f",& num1);
			 printf("\nEnter second number: ");
			 scanf("%f",& num2);
			 switch(choice)
			 {
				  case 1:
					  result = num1+num2;
					  printf("\nSum = %.2f",result);
					  break;
				  case 2:
				  result = num1-num2;
					  printf("\nDifference = %.2f",result);
					  break;
				  case 3:
					  result = num1*num2;
					  printf("\nProduct = %.2f",result);
					  break;
				  case 4:
					  if(num2==0)
					  {
						  printf("\nDivision by zero not possible.");
					  }
					  else
					  {
						  result = num1/num2;
						  printf("\nDivision = %.2f",result);
					  }
					  break;
				  default:
					  printf("\nInvalid Input! Try again...");
					  break;
			 }
		 }
	}
	getch();
}

```

## Pattern-1.c

**Description:** This program demonstrates how to pattern 1 using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	int N,i,j,n=1;
	//clrscr();
	printf("\nEnter number of lines: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
	getch();
}

```

## Pattern-2.c

**Description:** This program demonstrates how to pattern 2 using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	//clrscr();
	printf("\nEnter no. of lines: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}

```

## Pattern-3.c

**Description:** This program demonstrates how to pattern 3 using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	//clrscr();
	printf("\nEnter no. of lines: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}

```

## Pattern-4.c

**Description:** This program demonstrates how to pattern 4 using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	//clrscr();
	printf("\nEnter no of lines: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=2;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}

```

## Pattern-5.c

**Description:** This program demonstrates how to pattern 5 using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	//clrscr();
	printf("\nEnter no. half of line: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}

```

## Pattern-6.c

**Description:** This program demonstrates how to pattern 6 using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	//clrscr();
	printf("\nEnter no. of lines: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
}

```

## Pattern-7.c

**Description:** This program demonstrates how to pattern 7 using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	//clrscr();
	printf("\nEnter no. of lines: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=n-i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}

```

## Pattern-8.c

**Description:** This program demonstrates how to pattern 8 using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
	//clrscr();
    printf("\nEnter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    getch();
}

```

## Pattern-9.c

**Description:** This program demonstrates how to pattern 9 using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
	//clrscr();
	printf("\nEnter the number of rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=n;j++)
		{
			printf("*",j);
		}
		printf("\n");
	}
	getch();
}

```

## Prime-Composite.c

**Description:** This program demonstrates how to prime composite using C.

```c
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,count=0;
	//clrscr();
	printf("\nEnter a number: ");
	scanf("%d",&num);
	if(num==0 || num==1)
	{
		printf("\n%d is neither Prime nor Composite.",num);
		return 0;
	}
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			count=1;
			break;
		}
	}
	if(count==1)
	{
		printf("\n%d is Composite.",num);
	}
	else
	{
		printf("\n%d is Prime.",num);
	}
	getch();
	return 0;
}

```

## Simple-Calculator-If-Else.c

**Description:** This program demonstrates how to simple calculator if else using C.

```c
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

```

## Simple-Calculator-Switch-Case.c

**Description:** This program demonstrates how to simple calculator switch case using C.

```c
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

```

## Simple-Calculator-Using-Pointer.c

**Description:** This program demonstrates how to simple calculator using pointer using C.

```c
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
            input(&a,&b);
            if((*num2)==0)
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

```

## Vowel-Consonant-Switch-Case.c

**Description:** This program demonstrates how to vowel consonant switch case using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    //clrscr();
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }
    getch();
}

```

## Vowel-Consonant-using-if-else.c

**Description:** This program demonstrates how to vowel consonant using if else using C.

```c
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	//clrscr();
	printf("\nEnter a character:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("%c is Vowel.",ch);
	}
	else
	{
		printf("%c is Consonant.",ch);
	}
	getch();
}

```

