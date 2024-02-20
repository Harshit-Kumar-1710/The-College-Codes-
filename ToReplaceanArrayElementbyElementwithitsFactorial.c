#include<stdio.h>
int main()
{
int a[80],n,fact,i,j;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{ 
    fact=1;
    for(j=1;j<=a[i];j++)
    {
        fact=fact*j;
    }
a[i]=fact;
}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}