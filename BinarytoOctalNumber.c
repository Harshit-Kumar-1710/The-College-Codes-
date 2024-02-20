#include<stdio.h>
#include<math.h>
int main()
{long int n,binary,decimal=0,c=0,a,i=0,rem,ret,j=1;
printf("Enter a Binary Number\n");
scanf("%ld",&binary);
n=binary;
while(n!=0)
{
    rem=n%10;
    decimal=decimal+rem*pow(2,i);
    n=n/10;
    i++;
}
a=decimal;
while(a!=0)
{
    ret=a%8;
    c=c+ret*j;
    j=j*10;
    a=a/8;
}
printf("The Binary Number is :%ld",binary);
printf("The Decimal Number is :%ld",decimal);
printf("The Octal Number is :%ld",c);
return 0;
}