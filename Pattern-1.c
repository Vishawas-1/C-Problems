#include<stdio.h>
#include<conio.h>
void main()
{
	int N,i,j,n=1;
	//clrscr();
	printf("\nEnter number of lines: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
	getch();
}
