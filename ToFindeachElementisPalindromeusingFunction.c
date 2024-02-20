#include<stdio.h>
int countof(int);
int main()
{int a[50],i,n,p=0;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    p=p+countof(a[i]);
}
printf("The No. of the Palindrome Numbers in an Array are:%d",p);
return 0;
}
int countof(int c)
{int t,rev=0,rem;
t=c;
    while(c>0)
    {
        rem=c%10;
        rev=rev*10+rem;
        c=c/10;
    }
    if(t==rev)
        {
            c++;
        }
return c;
}