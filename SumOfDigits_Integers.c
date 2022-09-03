#include<stdio.h>
int main()
{
	int a,r;
	int sum=0;
	printf("Enter the number \n");
	scanf("%d", &a);
	r=a%10;
	a=a/10;
	sum=sum+r+a;
	printf("the sum of the digits of the number %d",sum);
	scanf("%d", &sum);
	return 0;
}
