#include<stdio.h>
int main()
{int n,m,i,j;
printf("Enter the no. of the Rows\n");
scanf("%d",&n);
printf("Enter the no. of the Columns\n");
scanf("%d",&m);
for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        printf("*");
    }
printf("\n");
}
return 0;
}