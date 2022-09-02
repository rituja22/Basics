#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	printf("Before swapping values of a = %d and b = %d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("New swapped values are a = %d and b = %d \n",a,b);
	return 0;
}
