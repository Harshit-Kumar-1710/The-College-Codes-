#include<stdio.h>
int main()
{int a[50],i,n,rev=0,rem,t,c=0;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{t=a[i];
    while(a[i]>0)
    {
        rem=a[i]%10;
        rev=rev*10+rem;
        a[i]=a[i]/10;
    }
        if(t==rev)
        {
            c=c+1;
        }
rev=0;
}
printf("The No. of the Palindrome Numbers in an Array are:%d",c);
return 0;
}