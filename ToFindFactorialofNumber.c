#include<stdio.h>
int func1(int);
int main()
{int n;
printf("Enter a Number\n");
scanf("%d",&n);
printf("The Factorial of the Number is : %d",func1(n));
return 0;
}
int func1(int n)
{
if(n==0 || n==1)
{
    return 1;
}
else
{
    return n*func1(n-1);
}
}