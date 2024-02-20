#include<stdio.h>
int main()
{int a[90][90],i,j,r,c,sum=0,product=1;
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
        sum=sum+a[i][j];
        product=product*a[i][j];   
    }
printf("\n");
}
printf("The Sum of all the Elements is :%d\n",sum);
printf("The Product of all the Elements is :%d",product);
return 0;
}