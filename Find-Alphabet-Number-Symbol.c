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
