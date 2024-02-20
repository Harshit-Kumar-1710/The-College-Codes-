#include<stdio.h>
int main()
{int a[5],n,i,sum=0,rem;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
while(a[i]>0)
{
    rem=a[i]%10;
    sum=sum+rem;
    a[i]=a[i]/10;
}
    a[i]=sum;
    printf("%d ",a[i]);
    sum=0;
}
return 0;
}