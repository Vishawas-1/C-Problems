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
