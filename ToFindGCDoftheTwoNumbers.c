#include<stdio.h>
int func2(int,int);
int main()
{int a,b,c;
printf("Enter the Two Numbers\n");
scanf("%d%d",&a,&b);
c=func2(a,b);
printf("The Hcf of the Two Numbers is :%d",c);
return 0;
}
int func2(int a,int b)
{
while(a!=b)
{
    if(a>b)
    {
        return func2(a-b,b);
    }
    else
    {
        return func2(a,b-a);
    }
}
return a;
}