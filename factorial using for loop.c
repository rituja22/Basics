#include<stdio.h>
int main()
{
	int i=0,n,factorial=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		factorial *=i;
	}
	printf("Value of factorial %d is %d \n",n,factorial);
	return 0;
}
