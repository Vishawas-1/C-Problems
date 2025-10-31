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
