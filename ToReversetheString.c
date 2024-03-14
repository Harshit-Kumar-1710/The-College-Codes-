#include<stdio.h>
#include<string.h>
int main()
{char a[90],b[90];
int i,j=0,l;
printf("Enter the Original String\n");
fgets(a,90,stdin);
l=strlen(a);
l=l-1;
for(i=l-1;i>=0;i--)
{
    b[j]=a[i];
    j++;
}
b[j]='\0';
printf("The Reversed String is :%s",b);
return 0;
}