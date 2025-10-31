#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	//clrscr();
	printf("\nEnter a character:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("%c is Vowel.",ch);
	}
	else
	{
		printf("%c is Consonant.",ch);
	}
	getch();
}
