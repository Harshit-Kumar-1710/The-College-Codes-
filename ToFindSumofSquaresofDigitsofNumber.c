#include<stdio.h>
int digits(int);
int main()
{int n;
printf("Enter a Number\n");
scanf("%d",&n);
printf("%d",digits(n));
return 0;
}
int digits(int n)
{int rem;
if(n==0)
{
    return 0;
}
else
{
    rem=n%10;
    n=n/10;
    return (rem*rem)+digits(n);
}
}