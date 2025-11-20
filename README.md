# Code from C-Problems-main

## C-Problems-main/Avg-Using-Array.c
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

## C-Problems-main/Celsius-to-Fahrenheit.c
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

## C-Problems-main/Convert-Case-U-L&L-U.c
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

## C-Problems-main/Factorial-Fibonacci-Using-Recursive.c
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

## C-Problems-main/Find-Alphabet-Number-Symbol.c
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

## C-Problems-main/Find-Electricity-Bill.c
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

## C-Problems-main/Find-Number-In-Array.c
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

## C-Problems-main/Find-Odd-Even.c
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

## C-Problems-main/Grade-Calculator.c
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

## C-Problems-main/Hexadecimal_Binary.c
```c
#include <stdio.h>
#include <conio.h>
int main()
{
    // clrscr();
    char hex[10];
    int i = 0;
    printf("Enter hexadecimal number: ");
    gets(hex);
    printf("\nBinary: ");
    while (hex[i] != '\0')
    {
        switch (hex[i])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '3':
            printf("0011");
            break;
        case '2':
            printf("0010");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'a':
        case 'A':
            printf("1010");
            break;
        case 'b':
        case 'B':
            printf("1011");
            break;
        case 'c':
        case 'C':
            printf("1100");
            break;
        case 'd':
        case 'D':
            printf("1101");
            break;
        case 'e':
        case 'E':
            printf("1110");
            break;
        case 'f':
        case 'F':
            printf("1111");
            break;
        default:
            printf("Invalid hexadecimal number!");
            break;
        }
        i++;
    }
    getch();
    return 0;
}

```

## C-Problems-main/Largest-among-three-numbers.c
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

## C-Problems-main/Matrix-Add-Multiply-Reverse-2D-Array.c
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

## C-Problems-main/Menu-Driven-AN-Prime-Reverse.c
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

## C-Problems-main/Menu-Driven-Calculator.c
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

## C-Problems-main/Palindrome_String.c
```c
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

```

## C-Problems-main/Pattern-1.c
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

## C-Problems-main/Pattern-2.c
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

## C-Problems-main/Pattern-3.c
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

## C-Problems-main/Pattern-4.c
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

## C-Problems-main/Pattern-5.c
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

## C-Problems-main/Pattern-6.c
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

## C-Problems-main/Pattern-7.c
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

## C-Problems-main/Pattern-8.c
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

## C-Problems-main/Pattern-9.c
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

## C-Problems-main/Pointer_Arithmetic.c
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

```

## C-Problems-main/Prime-Composite.c
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

## C-Problems-main/Simple-Calculator-If-Else.c
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

## C-Problems-main/Simple-Calculator-Switch-Case.c
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

## C-Problems-main/Simple-Calculator-Using-Pointer.c
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

## C-Problems-main/String_Functions.c
```c
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

```

## C-Problems-main/Time_Reading.c
```c
#include <stdio.h>
#include <conio.h>
#include <time.h>
int main()
{
    // clrscr();
    char timestr[10];
    struct tm t = {0};
    time_t check;
    printf("\nEnter time in HH:MM:SS format: ");
    gets(timestr);
    if (timestr[2] != ':' || timestr[5] != ':')
    {
        printf("\nInvalid Time!");
        return 0;
    }
    t.tm_hour = (timestr[0] - '0') * 10 + (timestr[1] - '0');
    t.tm_min = (timestr[3] - '0') * 10 + (timestr[4] - '0');
    t.tm_sec = (timestr[6] - '0') * 10 + (timestr[7] - '0');
    check = mktime(&t);
    if (t.tm_hour < 0 || t.tm_hour > 23 || t.tm_min < 0 || t.tm_min > 59 || t.tm_sec < 0 || t.tm_sec > 59)
    {
        printf("\nInvalid Time!");
    }
    else
    {
        printf("\nValid Time!");
        printf("\nTime: %d:%d:%d",t.tm_hour,t.tm_min,t.tm_sec);
        printf("\nHoure: %d",t.tm_hour);
        printf("\nMinutes: %d",t.tm_min);
        printf("\nSecond: %d",t.tm_sec);
    }
    getch();
    return 0;
}

```

## C-Problems-main/User_Defined_Ver_std.c
```c
#include <stdio.h>
#include <conio.h>
struct student
{
    char name[25];
    int age, marks[5];
};
int main()
{
    // clrscr();
    struct student std[3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Enter student name: ");
        gets(std[i].name);
        printf("Enter student age: ");
        scanf("%d", std[i].age);
        for (j = 0; j < 5; j++)
        {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%d", &std[j].marks);
        }
        fflush(stdin);
    }
    printf("Student Ditails:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Name : %s\n", std[i].name);
        printf("Age : %d", std[i].age);
        for (j = 0; j < 5; j++)
        {
            printf("Marks : %d", std[j].marks);
        }
        printf("\n");
    }
    getch();
    return 0;
}

```

## C-Problems-main/User_Difined_Ver_Emp.c
```c
#include <stdio.h>
#include <conio.h>
struct emp
{
    int eid, eage;
    float esal;
    char ename[25], edpt[20], eadd[50];
};
int main()
{
    struct emp e[10];
    int i, search_id, found = 0;
    printf("Enter details of 10 employees:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &e[i].eid);
        printf("Enter Employee Name: ");
        gets(e[i].ename);
        printf("Enter Employee Age: ");
        scanf("%d", &e[i].eage);
        printf("Enter Employee Department: ");
        gets(e[i].edpt);
        printf("Enter Employee Address: ");
        gets(e[i].eadd);
        printf("Enter Employee Salary: ");
        scanf("%f", &e[i].esal);
    }
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &search_id);
    for (i = 0; i < 3; i++)
    {
        if (e[i].eid == search_id)
        {
            found = 1;
            printf("\nEmployee Details:\n");
            printf("Employee ID: %d\n", e[i].eid);
            printf("Employee Name: %s\n", e[i].ename);
            printf("Employee Age: %d\n", e[i].eage);
            printf("Employee Department: %s\n", e[i].edpt);
            printf("Employee Address: %s\n", e[i].eadd);
            printf("Employee Salary: %.2f\n", e[i].esal);
            break;
        }
    }
    if (!found)
    {
        printf("\nEmployee with ID %d not found.\n", search_id);
    }
    return 0;
}

```

## C-Problems-main/Vowel-Consonant-Switch-Case.c
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

## C-Problems-main/Vowel-Consonant-using-if-else.c
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

## C-Problems-main/main.c
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

