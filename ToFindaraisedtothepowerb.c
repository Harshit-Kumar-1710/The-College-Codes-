#include<stdio.h>
int main()
{int a,b,i,power=1;
printf("Enter the Base\n");
scanf("%d",&a);
printf("Enter the Exponent\n");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
    power=power*a;
}
printf("The Value of %d raised to the power %d is : %d",a,b,power);
}