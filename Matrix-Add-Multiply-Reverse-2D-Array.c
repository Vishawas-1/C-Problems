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
