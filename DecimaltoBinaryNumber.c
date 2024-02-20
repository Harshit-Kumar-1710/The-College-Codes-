#include<stdio.h>
int main()
{long int n,Binary=0,Decimal,rem,i=1;
printf("Enter a Decimal Number\n");
scanf("%ld",&n);
Decimal=n;
while(Decimal!=0)
{
    rem=Decimal%2;
    Binary=Binary+rem*i;
    i=i*10;
    Decimal=Decimal/2;
}
printf("The Decimal Number is :%ld\n",n);
printf("The Binary Number is :%ld",Binary);
return 0;
}