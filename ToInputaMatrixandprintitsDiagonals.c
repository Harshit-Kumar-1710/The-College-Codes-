#include<stdio.h>
int main()
{int a[90][90],i,j,r,c;
printf("Enter the Rows and the Columns of the Matrix");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
if(r==c)
{
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        if(i==j)
        {
            printf("%d ",a[i][j]);
        }
    }
}
printf("\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        if(i+j==r-1)
        {
            printf("%d ",a[i][j]);
        }
    }
}
}
else
{
    printf("The Matrix is not a Square Matrix");
}
return 0;
}