#include<stdio.h>
#include<string.h>
int main()
{char a[90];
int i,l;
printf("Enter the String\n");
fgets(a,90,stdin);
l=strlen(a);
l=l-1;
for(i=0;a[i]!='\0';i++)
{
    if(a[i]>='A' && a[i]<='Z')
    {
        a[i]=a[i]+32;
    }
    else if (a[i]>='a' && a[i]<='z')
    {
        a[i]=a[i]-32;
    }
}
a[i]='\0';
puts(a);
return 0;
}