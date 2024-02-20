#include<stdio.h>
void func1(int,int);
int main()
{int y,x,a,b;
printf("Enter the Two Numbers\n");
scanf("%d%d",&a,&b);
func1(a,b);
return 0;
}
void func1(int a,int b)
{int y,x;
if(a>b)
{
    y=a;
    x=b;
}
else
{
    y=b;
    x=a;
}
printf("The Maximum Number is :%d",y);
printf("The Minimum Number is :%d",x);
}