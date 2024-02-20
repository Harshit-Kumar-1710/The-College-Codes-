#include<stdio.h>
int func1(int);
int main()
{int n,c;
printf("Enter the No. of the Terms\n");
scanf("%d",&n);
for(c=1;c<=n;c++)
{
    printf("%d ",func1(c));
}
return 0;
}
int func1(int c)
{
if (c==1)
{
    return 0;
}
else if(c==2 || c==3)
{
    return 1;
}
else
{
    return func1(c-1)+func1(c-2);
}
}