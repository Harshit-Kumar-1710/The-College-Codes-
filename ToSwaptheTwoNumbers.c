#include<stdio.h>
int main()
{int a,b,*p,*n,c,*y;
printf("Enter the Two Numbers\n");
scanf("%d%d",&a,&b);
p=&a;
n=&b;
c=a;
a=b;
b=c;
printf("a is :%d ",*p);
printf("b is :%d",*n);
return 0;


}