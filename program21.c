#include<stdio.h>
int main()
{
	int n,t;
	printf("Enter the number of starting integer and the number of rows\n");
	scanf("%d %d",&t,&n);
	int i,j,p;
	p=t+n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("%d ",t);
		printf("\n");
		t++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		printf("%d ",p);
		printf("\n");
		--p;
	}
	return 0;
}
