#include<stdio.h>
int main()
{int a[90],n,i,max,min;
printf("Enter the Size of an Array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
    if(a[i]<min)
    {
        min=a[i];
    }
}
printf("The Maximum Element in the Array is :%d",max);
printf("The Minimum Element in the Array is :%d",min);
}