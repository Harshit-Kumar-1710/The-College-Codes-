#include<stdio.h>
int main()
{int a[90][90],i,j,r,c;
printf("Enter the Rows and the Columns of the Matrix");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        if (j>=i)
        {
        scanf("%d",&a[i][j]);
        }
        else
        {
        a[i][j]=0;
        }
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d\t",a[i][j]);
    }
printf("\n");
}
return 0;
}