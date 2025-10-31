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
