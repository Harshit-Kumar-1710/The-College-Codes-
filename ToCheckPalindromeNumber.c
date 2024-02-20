#include<stdio.h>
int palin(int);
int main()
{int n,t,a;
printf("Enter a Number\n");
scanf("%d",&n);
t==n;
a=palin(n);
if(t==a)
{
    printf("The Number is a Palindrome Number");
}
else
{
    printf("The Number is not a Palindrome Number");
}
return 0;
}
int rev=0;
int palin(int n)
{
int rem;
if(n>0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    return palin(n);
}
else
{
    return rev;
}
}