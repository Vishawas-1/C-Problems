#include<stdio.h>
#include<conio.h>
void main(){
	float num1=0,num2=0,per=0,result=0;
	int choice,total,n,i;
	//clrscr();
	while(1)
	{
		 printf("\n\nMenu Driven Calculetor!");
		 printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Average\n6.Persentage\n7.Exit");
		 printf("\nEnter your choice from (1-7): ");
		 scanf("%d",&choice);
		 if(choice==7)
		 {
			  printf("\nExiting the program!\nTry again later...");
			  break;
		 }
		 else if(choice==6)
		 {
			  printf("\nEnter obtened marks: ") ;
			  scanf("%f",& num1);
			  printf("\nEnter total marks: ");
			  scanf("%d",& total);
			  if(total==0)
			  {
				   printf("\nTotal can't be zero!\nTry again...");
			  }
			  else
			  {
				  per=(num1/total)*100;
				  printf("\nPercentage = %.2f%%",per);
			  }
		 }
		 else if(choice==5)
		 {
			 printf("\nHow many numbers do you want to find the average of: ");
			 scanf("%d",&n);
			 for(i=1;i<=n;i++)
			 {
				 printf("\nEnter the number %d: ",i);
				 scanf("%f",&num1);
				 num1=num1+num2;
				 num2=num1;
			 }
			 result=num1/n;
			 printf("\nAverage = %.2f",result);
		 }
		 else
		 {
			 printf("\nEnter first number: ");
			 scanf("%f",& num1);
			 printf("\nEnter second number: ");
			 scanf("%f",& num2);
			 switch(choice)
			 {
				  case 1:
					  result = num1+num2;
					  printf("\nSum = %.2f",result);
					  break;
				  case 2:
				  result = num1-num2;
					  printf("\nDifference = %.2f",result);
					  break;
				  case 3:
					  result = num1*num2;
					  printf("\nProduct = %.2f",result);
					  break;
				  case 4:
					  if(num2==0)
					  {
						  printf("\nDivision by zero not possible.");
					  }
					  else
					  {
						  result = num1/num2;
						  printf("\nDivision = %.2f",result);
					  }
					  break;
				  default:
					  printf("\nInvalid Input! Try again...");
					  break;
			 }
		 }
	}
	getch();
}
