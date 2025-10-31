#include<stdio.h>
#include<conio.h>
int main()
{
    float marks[50],sum=0,avg;
    int i;
    //clrscr();
    for(i=0;i<50;i++)
    {
        printf("\nEnter Marks of Student %d (in %%): ",i+1);
        scanf("%f",&marks[i]);
        sum=sum+marks[i];
    }
    avg=sum/50;
    printf("\nAverage of 50 Student = %.2f",avg);
    getch();
    return 0;
}
