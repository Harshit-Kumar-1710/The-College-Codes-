#include<stdio.h>
int main()
{int n,i,tab;
printf("Enter a Number whose table is to be shown\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
    tab=n*i;
    printf("%d*%d=%d\n",n,i,tab);
}
return 0;
}