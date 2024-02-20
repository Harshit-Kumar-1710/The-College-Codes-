#include<stdio.h>
int sumof(int);
int main()
{int a[5],n,i;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    a[i]=sumof(a[i]);
    printf("%d",a[i]);
}
return 0;
}
int sumof(int a)
{int rem,sum=0;
while(a>0)
{
    rem=a%10;
    sum=sum+rem;
    a=a/10;
}
return sum;
}