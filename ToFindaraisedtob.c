#include<stdio.h>
int powe(int,int);
int main()
{int a,b,c;
printf("Enter a Base\n");
scanf("%d",&a);
printf("Enter an Exponent");
scanf("%d",&b);
c=powe(a,b);
printf("The Power of %d raised to %d is :%d",a,b,powe(a,b));
return 0;
}
int powe(int a ,int b)
{static int power=1;
if(b==0)
{
    return power;
}
else
{
    return (a*powe(a,b-1));
}
}