#include<stdio.h>
int main()
{
	int n;
	printf("Enter value of n \n");
	scanf("%d",&n);
	int mul[10];
	for(int i=0;i<10;i++)
		{
			mul[i]=n*(i+1);
		}
	for(int i=0;i<10;i++)
		{
			printf("nx%d = %d \n",i+1,mul[i]);
		}
	return 0;
}
