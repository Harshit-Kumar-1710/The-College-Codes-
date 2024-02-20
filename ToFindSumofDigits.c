#include<stdio.h>
int func1(int);
int main()
{int n,a;
printf("Enter a Number\n");
scanf("%d",&n);
a=func1(n);
printf("%d",a);
return 0;
}
int func1(int n)
{int rem;
if(n>0)
{
    rem=n%10;
    n=n/10;
    return rem+func1(n);
}
else
{
    return 0;
}
}
