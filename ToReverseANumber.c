#include<stdio.h>
int func2(int);
int main()
{int n;
printf("Enter a Number\n");
scanf("%d",&n);
printf("The Reversed Number is :%d ",func2(n));
return 0;
}
int func2(int n)
{static int rev =0;
int rem;
if(n==0)
{
    return rev;
}
else
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    return func2(n);
}
}