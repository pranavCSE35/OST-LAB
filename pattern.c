#include<stdio.h>
int main()
{
	printf("Enter a number");
	int n;
	scanf("%d",&n);
	int i=0,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(j=i;j>=0;j--)
		{
			printf("*");
		}
		for(j=i;j>0;j--)
			printf("*");
		printf("\n");
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(j=i;j>=0;j--)
		{
			printf("*");
		}
		for(j=i;j>0;j--)
			printf("*");
		printf("\n");
	}
}
