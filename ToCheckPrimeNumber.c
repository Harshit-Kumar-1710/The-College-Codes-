#include<stdio.h>
void func1();
int main()
{
func1();
return 0;
}
void func1()
{int n,i;
printf("Enter a Number\n");
scanf("%d",&n);
int a=0;
for(i=2;i<=n-1;i++)
{
    if(n%i==0)
    {
       a++;
       break;
    }
}
if(n==1)
{
    printf("The Number is neither Prime nor Composite");
}
else if(a==0)
{
    printf("The Number is a Prime Number");
}
else
{
    printf("The Number is a Composite Number");
}
}
