#include<stdio.h>
int func1(int); // A Function Declaration
int main()
{int n,a;
printf("Enter a number\n");
scanf("%d",&n);
a=func1(n);
printf("The No. of the Digits in the Number are :%d",a); // A Function Calling
return 0;
}
int func1(int n)
{static int c=0;
if(n==0)
{
    return c;
}
else
{
    c++;
    n=n/10;
    return func1(n);
}
}