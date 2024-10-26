#include<stdio.h>
int main()
{
	int i,j,s,n=5;
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		printf("  ");
		for(j=5;j>i;j--)
		printf("* ");
		printf("\n");
	}
	return 0;
}
