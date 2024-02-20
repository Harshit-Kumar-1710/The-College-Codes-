#include<stdio.h>
int func1(int);
int main()
{int i=2;
printf("%d",func1(i));
return 0;
}
int func1(int i)
{int n;
printf("Enter a Number\n");
scanf("%d",&n);
if(i<=n)
{
    if(n%i==0)
    {
        printf("%d",i);
        i=i+1;
        return func1(i);
    } 
}
else
{
   return 0;
}
}
