#include<stdio.h>
int main()
{int a[90],n,*p,i;
printf("Enter the No.of the Elements\n");
scanf("%d",&n);
p=a;
for(i=0;i<n;i++)
{
    scanf("%d",(p+i));
}
for(i=0;i<n;i++)
{
    printf("%d",*(p+i));
}
return 0;
}