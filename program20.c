#include<stdio.h>
int main()
{
	int i,j,n=4,t=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		printf("%d ",t++);
		printf("\n");
	}
	return 0;
}

