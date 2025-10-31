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
