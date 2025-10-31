#include<stdio.h>
#include<conio.h>
void main()
{
	float tc,tf;
	//clrscr();  //only for turbo C/C++ users
	printf("\nEnter temperature in celsius: ");
	scanf("%f",&tc);
	tf=(float)9/(float)5*tc+32;
	printf("\n%.2f Celsius = %2.f Fahrenheit.",tc,tf);
  getch();
}
