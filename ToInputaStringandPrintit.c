#include<stdio.h>
int main()
{int n,i;
char a[90];
printf("Enter the Length of the String\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%s",&a[i]);
}
a[i]='\0';
printf("%s",a);
return 0;
}