#include<stdio.h>
#include<math.h>
int main()
{long int n,a,Decimal=0,Binary=0,i=0,rem,c;
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
c=Decimal;
int j=1,ret;
while(c!=0)
{
    ret=c%2;
    Binary=Binary+ret*j;
    j=j*10;
    c=c/2;
}
printf("The Octal Number is :%ld",n);
printf("The Decimal Number is :%ld",Decimal);
printf("The Binary Number is :%ld",Binary);
return 0;
}