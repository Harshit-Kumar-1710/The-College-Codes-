#include<stdio.h>
int main()
{char a[90];
int i=0;
printf("Enter the Original String\n");
fgets(a,80,stdin);
//Now the Lowercase Characters will be converted to the Uppercase Charactersa
while(a[i]>=97 && a[i]<=122)
{
    a[i]=a[i]-32;
    i++;
}
//Now the Uppercase Characters will be converted to the Lowercase Characters
while(a[i]>=65 && a[i]<=90)
{
    a[i]=a[i]+32;
    i++;
}
printf("The New String is :%s",a);
return 0;
}