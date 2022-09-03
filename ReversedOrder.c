#include<stdio.h>
int main()
{
    int i,num;
    printf("Value of number: \n");
    scanf("%d",&num);
	printf("Natural numbers from %d to 1: \n",num);
		while(num>=1)
    	{
        	printf("%d \n",num);
        	--num;
    	}	

    return 0;
}
