#include<stdio.h>
#include<math.h>
int main()
{int n,rem,rev=0,digits;
printf("Enter a Number\n");
scanf("%d",&n);
digits = (int) log10(n); 
while(n!=0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
digits=digits-(int) log10(rev);
while(rev!=0)
{
rem=rev%10;
switch(rem)
{
    case 0: printf("Zero");
            break;
    case 1: printf("One");
            break;
    case 2: printf("Two");
            break;
    case 3: printf("Three");
            break;
    case 4: printf("Four");
            break;
    case 5: printf("Five");
            break;
    case 6: printf("Six");
            break;
    case 7: printf("Seven");
            break;
    case 8: printf("Eight");
            break;
    case 9: printf("Nine");
            break;
}
rev=rev/10;
}
for(int a=0;a<digits;a++)
printf("Zero");
return 0;
}