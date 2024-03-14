#include<stdio.h>
#include<string.h>
int main()
{char a[90];
int l,i;
printf("Enter the String\n");
fgets(a,80,stdin);
l=strlen(a);
l=l-1;
for(i=l-1;i>=0;i--)
{  
    printf("%c ",a[i]);
}
a[i]='\0';
return 0;
}