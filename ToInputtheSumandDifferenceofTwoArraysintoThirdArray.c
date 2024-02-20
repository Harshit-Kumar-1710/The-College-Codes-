#include<stdio.h>
int main()
{int a[90][90],b[90][60],e[20][45],d[90][67],i,j,r,c;
printf("Enter the Rows and the Columns of the First Matrix and Second Matrix");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        e[i][j]=a[i][j]+b[i][j];
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        d[i][j]=a[i][j]-b[i][j];
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d ",e[i][j]);
    }
printf("\n");
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d ",d[i][j]);
    }
printf("\n");
}
return 0;
}