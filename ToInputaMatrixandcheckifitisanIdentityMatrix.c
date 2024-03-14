#include<stdio.h>
int main()
{int a[90][80],i,j,r,c,flag;
printf("Enter the Rows and the Columns of the 2-D Array\n");
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
        if(i==j && a[i][j]!=1)
        {
            flag=1;
            break;
        }
        else if (i!=j && a[i][j]!=0)
        {
            flag=1;
            break;
        }
    }
}
if(flag==1)
{
    printf("The Matrix is not an Identity Matrix");
}
else
{
    printf("The Matrix is an Identity Matrix");
}
}
else
{
    printf("The Matrix is not a Square Matrix");
}
return 0;
}