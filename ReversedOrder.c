#include<stdio.h>
int main()
{
    int i,n;
    printf("Value of n: \n");
    scanf("%d",&n);

    for(i=n;i>=0;i--)
    {
        printf("The values in reversed order are: %d \n",i);
    }
    return 0;
}
