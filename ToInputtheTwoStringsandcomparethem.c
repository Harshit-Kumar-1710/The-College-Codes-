#include<stdio.h>
int main()
{char a[90],b[80];
int i=0,flag=0;
printf("Enter the First String\n");
fgets(a,90,stdin);
printf("Enter the Second String\n");
fgets(b,80,stdin);
while(a[i]!='\0'|| b[i]!='\0')
{
    if(a[i]==b[i])
    {
        i++;
    }
    else if((a[i]=='\0' && b[i]!='\0')|| (a[i]!='\0' && b[i]=='\0')||a[i]!=b[i])
    {
        flag=1;
        break;
    }
}
if(flag==0)
{
    printf("The Strings are equal");
}
else
{
    printf("The Strings are not equal");
}
return 0;
}