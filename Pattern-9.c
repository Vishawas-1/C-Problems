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
