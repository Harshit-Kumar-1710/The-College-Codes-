#include<stdio.h>
#include<math.h>
int main()
{long int n,Decimal=0,Binary,rem,i=0;
printf("Enter a Binary Number\n");
scanf("%ld",&n);
Binary=n;
while(Binary!=0)
{
    rem=Binary%10;
    Decimal=Decimal+rem*pow(2,i);
    i++;
    Binary=Binary/10;
}
printf("The Binary Number is :%ld\n",n);
printf("The Decimal Number is :%ld",Decimal);
return 0;
}