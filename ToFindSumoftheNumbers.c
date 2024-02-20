#include<stdio.h>
int func1(int);
int main()
{int n;
printf("Enter the Last Term\n");
scanf("%d",&n);
func1(n);
printf("%d",func1(n));
return 0;
}
int func1(int n)
{
if(n==1)
{
    return 1;
}
else
{
    return n+func1(n-1);
}
}