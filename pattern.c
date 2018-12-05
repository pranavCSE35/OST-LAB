#include<stdio.h>
int main()
{
	printf("Enter a number");
	int n;
	scanf("%d",&n);//this denotes the number of lines to be printed
	int i=0,j,k;
	for(i=0;i<n;i++)//this loop is for printing the upper traingle
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(j=i;j>=0;j--)//left triangle
		{
			printf("*");
		}
		for(j=i;j>0;j--)//right triangle
			printf("*");
		printf("\n");
	}




	for(i=n-2;i>=0;i--)//this loop is for printing lower triangle
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(j=i;j>=0;j--)//left triangle
		{
			printf("*");
		}
		for(j=i;j>0;j--)//right triangle
			printf("*");
		printf("\n");
	}
}
