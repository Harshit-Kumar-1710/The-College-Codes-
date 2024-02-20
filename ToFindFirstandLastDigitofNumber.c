#include<stdio.h>
int main()
{int n,rem;
printf("Enter a Number\n");
scanf("%d",&n);
printf("The Last Digit of the Number is :%d",n%10);
while(n!=0)
{
    rem=n%10;
    n=n/10;
}
printf("The First Digit of the Number is : %d",rem);
return 0;
}