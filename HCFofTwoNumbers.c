#include<stdio.h>
int main()
{int a,b,i,Hcf,min;
printf("Enter the Two Numbers\n");
scanf("%d%d",&a,&b);
min=a<b?a:b;
for(i=1;i<=min;i++)
{
    if(a%i==0 && b%i==0)
    {
        Hcf=i;
    }
}
printf("The HCF of the Two Numbers is:%d",Hcf);
return 0;
}