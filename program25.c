#include<stdio.h>
int main()
{
	int i,j,n=5;
	char t;
	for(i=0;i<n;i++)
	{
		t=65;
		for(j=0;j<i+1;j++)
		printf("%c ",t++);
		printf("\n");
	}
	return 0;
}
