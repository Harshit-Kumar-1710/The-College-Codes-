#include<stdio.h>
int armstr(int); // A Function Declaration
int main()
{int n,t,a;
printf("Enter a Number\n");
scanf("%d",&n);
t=n;
a=armstr(n); // A Function Calling
if(t==a)
{
    printf("The Number is an Armstrong Number");
}
else
{
    printf("The Number is not an Armstrong Number");
}
return 0;
}
int armstr(int n) // A Function Definition
{int rem;
if(n>0)
{
    rem=n%10;
    n=n/10;
    return (rem*rem*rem)+armstr(n);
}
}