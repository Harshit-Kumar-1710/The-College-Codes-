#include<stdio.h>
int main()
{int a,b,i,max,Lcm;
printf("Enter the Two Numbers\n");
scanf("%d%d",&a,&b);
max=a>b?a:b;
for(i=max;i>=max;i++)
{
    if(i%a==0 && i%b==0)
    {
        Lcm=i;
        break;
    }
    
}
printf("The LCM of the Two Numbers is :%d",Lcm);
return 0;
}