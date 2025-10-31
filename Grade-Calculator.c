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
