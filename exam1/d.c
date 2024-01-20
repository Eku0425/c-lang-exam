#include<stdio.h>
main()
{
	int i,j,k;
	
	
	for(i=10;i>=6;i--)
	{
		for(k=4;k>i;k--)
		{
			printf("*");
		}
		for(j=i;j<=10;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
