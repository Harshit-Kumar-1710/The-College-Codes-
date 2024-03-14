#include<stdio.h>
int main()
{int a[50],i,n,b;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter an Element to Search in the Array\n");
scanf("%d",&b);
for(i=0;i<n;i++)
{
    if(b==a[i])
    {
        printf("%d is present in the Array\n",b);
        printf("The Index of %d is %d",b,i);
    }
    else
    {
        printf("%d is not present in the Array",b);
    }
}
return 0;
}