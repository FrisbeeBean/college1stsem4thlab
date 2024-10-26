#include<stdio.h>
int main()
{
	int i,j,n=5;
	for(i=0;i<n;i++)
	{
		if(i%2==0 || i==0)
		{
			for(j=0;j<n+1;j++)
			printf("%d",i+1);
			printf("%d\n",i+2);
			
		}
		else
		{
			printf("%d",i+2);
			for(j=0;j<n+1;j++)
			printf("%d",i+1);
			printf("\n");
		}
	}
}
