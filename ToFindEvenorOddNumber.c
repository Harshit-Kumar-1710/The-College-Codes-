#include<stdio.h>
int func1(int);
int main()
{int n,a;
printf("Enter a Number");
scanf("%d",&n);
a=func1(n);
return 0;
}
int func1(int n)
{int a;
if(n%2==0)
{
    printf("The Number is an Even Number");
}
else
{
    printf("The Number is an Odd Number");
}
a=n;
return a;
}