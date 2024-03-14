#include<stdio.h>
#include<string.h>
int main()
{char a[90],b[80];
int l,i=0;
printf("Enter the First String\n");
fgets(a,90,stdin);
printf("Enter the Second String\n");
fgets(b,90,stdin);
l=strlen(a);
l-1;
while(b[i]!='\0')
{
    a[l]=b[i];
    l++;
    i++;
}
a[l]='\0';
printf("%s",a);
return 0;
}