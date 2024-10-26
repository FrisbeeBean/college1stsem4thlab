#include<stdio.h>
int main()
{
	int i,j,n=5,t;
	for(i=0;i<n;i++)
	{
		t=1;
		for(j=0;j<n-i;j++)
		printf("%d ",t++);
		printf("\n");
	}
	return 0;
}

