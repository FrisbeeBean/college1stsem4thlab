#include<stdio.h>
int main()
{
	int i,j,n=5,t;
	for(i=0;i<n;i++)
	{
		t=1;
		for(j=0;j<i+1;j++)
		printf("%d ",t++);
		printf("\n");
	}
	return 0;
}
