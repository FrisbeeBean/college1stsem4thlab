#include<stdio.h>
int main()
{
	int i,j,n=5;
	char t=65;
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<i+1;j++)
		printf("%c",t);
		t++;
		printf("\n");
	}
	return 0;
}
