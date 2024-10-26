#include<stdio.h>
int main()
{
	int i,j,s,n=5;
	for(i=0;i<n-1;i++)
	{
		for(s=0;s<i;s++)
		printf(" ");
		printf("*");
		for(j=0;j<n-2*i+2;j++)
		printf("-");
		printf("*");
		printf("\n");
	}
	while(s!=-1)
	{
	printf(" ");
	s--;
	}
	printf("*");
	return 0;
}
