#include<stdio.h>
int main()
{
	int i,m,sum=0;
	printf("Value of m \n");
	scanf("%d", &m);
	for(i=1;i<=m;++i)
	{
		sum +=i;
	}
	printf("Sum is %d",sum);
	return 0;
}
