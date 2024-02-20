#include<stdio.h>
#include<math.h>
int main()
{long int n,a,Decimal=0,i=0,rem;
printf("Enter an Octal Number\n");
scanf("%ld",&n);
a=n;
while(a!=0)
{
    rem=a%10;
    Decimal=Decimal+rem*pow(8,i);
    i++;
    a=a/10;
}
printf("The Octal Number is :%ld",n);
printf("The Decimal Number is :%ld",Decimal);
}