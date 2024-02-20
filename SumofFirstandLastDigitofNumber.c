#include<stdio.h>
int main()
{int n,rem,LastDigit,sum=0;
printf("Enter a Number\n");
scanf("%d",&n);
LastDigit=n%10;
printf("The Last Digit of the Number is :%d",LastDigit);
while(n>0)
{
    rem=n%10;
    n=n/10;
}
printf("The First Digit of the Number is : %d",rem);
sum=sum+LastDigit+rem;
printf("The Sum  is : %d",sum);
return 0;
}