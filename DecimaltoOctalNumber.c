#include<stdio.h>
#include<math.h>
int main()
{long int n,Decimal,a=0,i=1,rem;
printf("Enter a Decimal Number\n");
scanf("%ld",&n);
Decimal=n;
while(Decimal!=0)
{
    rem=Decimal%8;
    a=a+rem*i;
    i=i*10;
    Decimal=Decimal/8;
}
printf("The Decimal Number is :%ld\n",n);
printf("The Octal Number is :%ld",a);
}