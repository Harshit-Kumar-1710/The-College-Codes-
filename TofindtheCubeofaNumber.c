#include<stdio.h>
int cubeof(int);
int main()
{int n,a;
printf("Enter a Number\n");
scanf("%d",&n);
a=cubeof(n);
printf("%d",a);
return 0;
}
int cubeof(int n)
{int a;
a=n*n*n;
return a;
}