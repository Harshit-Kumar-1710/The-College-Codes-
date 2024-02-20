#include<stdio.h>
int func2(int,int);
int main()
{int a,b,c;
printf("Enter the Two Numbers\n");
scanf("%d%d",&a,&b);
c=func2(a,b);
printf("The LCM of the Two Numbers is :%d",c);
}
int func2(int a,int b)
{
while(i>=max)
{
    if(a<b)
    {
        return func2(b-a,b);
    }
    else
    {
        return func2(a-b,b);
    }
}
return a;
}