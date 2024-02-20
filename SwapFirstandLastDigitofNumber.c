#include<stdio.h>
int main()
{int n,rem,LastDigit;
printf("Enter a Number\n");
scanf("%d",&n);
LastDigit=n%10;
while(n!=0)
{
    rem=n%10;
    n=n/10;
}
LastDigit=LastDigit+rem;
rem=LastDigit-rem;
LastDigit=LastDigit-rem;
printf("The Last Digit of the Number is:%d",LastDigit);
printf("The First Digit of the Number is:%d",rem);
return 0;
}