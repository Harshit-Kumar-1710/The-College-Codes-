#include<stdio.h>
int main()
{int n,arr[n],i,product=1;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    product=product*arr[i];
}
printf("The Product of all the Elements in an Array is:%d",product);
return 0;
}