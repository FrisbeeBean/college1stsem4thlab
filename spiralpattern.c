#include<stdio.h>
int main()
{
    int s,i,j,a,b,x,y,num;
    printf("Enter the size of the pattern: ");
    scanf("%d", &s);
    int p[10][10]={0};
    num=1;
    a=b=i=j=0;        //min value of row
                //min value of column   
    x=s-1;        //max value of row
    y=s-1;        
    while(num<=s*s)
    {
        for(j=b;j<=y;j++)
        {
            p[a][j]=num;
            num++;
        }
        a++;
        for(i=a;i<=x;i++)
        {
            p[i][y]=num;
            num++;
        }
        y--;
        for(j=y;j>=b;j--)
        {
            p[x][j]=num;
            num++;
        }
        x--;
        for(i=x;i>=a;i--)
        {
            p[i][b]=num;
            num++;
        }
        b++;
    }
    printf("\n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        printf("%d\t",p[i][j]);
        printf("\n");
    }
    return 0;
}