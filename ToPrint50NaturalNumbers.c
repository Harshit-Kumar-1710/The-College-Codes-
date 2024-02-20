#include<stdio.h>
int func1(int);
int main()
{int a,n=50,i=1;
a=func1(i);
printf("%d ",a);
return 0;
}
int func1(int i)
{int n=50;
if(i<=n)
{
    printf("%d ",i);
    i++;
    return func1(i);
}
}