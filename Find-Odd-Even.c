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
