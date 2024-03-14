#include<stdio.h>
int main()
{int a[50],n,i,rev=0,rem;
printf("Enter the No. of Elements of an Array\n");
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
        rev=rev*10+rem;
        a[i]=a[i]/10;
    }
    a[i]=rev;
rev=0;
}
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
return 0;
}