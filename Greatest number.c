#include<stdio.h>
int main()
{
	int g;
	int a,b,c,d;
	printf("Enter a number \n");
	scanf("%d","%d","%d", "%d", &a, &b, &c, &d);
	if(a>b && a>c && a>d )
	{
		printf("a=g",a);
	}
	else if(b>c && b>a && b>d)
	{
		printf("b=g",b);
	}
	else if(c>d && c>a && c>b)
	{
		printf("c=g",c);
	}
	else if(d>a && d>b && d>c)
	{
		printf("d=g",d);
	}
	return 0;
}
