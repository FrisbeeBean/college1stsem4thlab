#include<stdio.h>
int main()
{
	int i,j,n=4,t=4;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("%d*",i+1);
		printf("\b \b");
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		printf("%d*",t);
		printf("\b \b");
		printf("\n");
		t--;
	}
	return 0;
}
