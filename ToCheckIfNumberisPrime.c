#include<stdio.h>
int func1(int);
int main()
{int a,c,n;
printf("Enter a Number\n");
scanf("%d",&n);
a=func1(n);
if(c==2)
{
    printf("The Number is a Prime Number");
}
else
{
    printf("The Number is not a Prime Number");
}
return 0;
}
int func1(int n)
{int i=1;
static int c=0;
if(i<n)
{
    c++;
    i++;
    func1(i);
}
else
{
    i++;
    return func1(i);
}
}