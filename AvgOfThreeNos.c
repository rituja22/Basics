#include<stdio.h>
int main()
{
	float a,b,c;
	float average;
	printf("the values of the three nos are \n");
	scanf("%f %f %f", &a, &b, &c);
	average=(a+b+c)/3;
	printf("The average value is %f \n",average);
	if(a>average)
	{
		printf("a is greater than average value %f \n",a);
	}
	if(b>average)
	{
		printf("b is greater than average value %f \n",b);
	}
	if(c>average)
	{
		printf("c is greater than average value %f \n",c);
	}
	if(a<average)
	{
		printf("a is lesser than average value %f \n",a);
	}
	if(b<average)
	{
		printf("b is lesser than average value %f \n",b);
	}
	if(c<average)
	{
		printf("c is lesser than average value %f \n",c);
	}	
	return 0;
}
