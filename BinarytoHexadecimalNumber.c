#include<stdio.h>
#include<math.h>
int main()
{long int n,Binary,Decimal=0,i=0,rem,ret,a,j=1;
char Hexadecimal[20],HEXVALUE[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
printf("Enter a Binary Number\n");
scanf("%ld",&Binary);
n=Binary;
while(n>0)
{
    rem=n%10;
    Decimal=Decimal+rem*pow(2,i);
    i++;
    n=n/10;
}
a=Decimal;
while(a>0)
{
    ret=a%16;
    Hexadecimal+=HEXVALUE[ret];
    a=a/16;
}
printf("The Binary Number is :%ld",Binary);
printf("The Decimal Number is :%ld",Decimal);
printf("The Hexadecimal Number is :%s",Hexadecimal);
return 0;
}