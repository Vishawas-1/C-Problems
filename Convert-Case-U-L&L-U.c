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
