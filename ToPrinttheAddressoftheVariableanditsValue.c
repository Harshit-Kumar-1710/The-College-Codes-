#include<stdio.h>
int main()
{double *p,n;
printf("Enter the Number\n");
scanf("%ld",&n);
p=&n;
printf("%u\n",p);
printf("%ld",*p);
return 0;
}