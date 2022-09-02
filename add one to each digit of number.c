#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	int number;
	int newnumber;
	printf("Individual values of the number \n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	number=10000*a+1000*b+100*c+10*d+e;
	printf("The number is %d \n",number);
	a=a+1;
	b=b+1;
	c=c+1;
	d=d+1;
	e=e+1;
	newnumber=10000*a+1000*b+100*c+10*d+e;
	printf("The new number is %d \n",newnumber);
	return 0;
}
