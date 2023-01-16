#include<stdio.h>

int main()
{
	int n,i,j;
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=i;j++)
			{
				
				j%2==0?printf("1"):printf("0");
				
			}
		}
		else
		{
			for(j=1;j<=i;j++)
			{

				j%2==0?printf("0"):printf("1");
	
			}
		}
		printf("\n");
	}
	return 0;
}
