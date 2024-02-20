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
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d ",a[j][i]);
    }
printf("\n");    
}

return 0;
}