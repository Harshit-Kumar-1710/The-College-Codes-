#include<stdio.h>
int main()
{
char a[90],key,b[100];
int i=0,j=0;
printf("Enter the String\n");
fgets(a,90,stdin);
printf("Enter the Key");
scanf("%c",&key);
while(a[i]!='\0')
{
    if(a[i]!=key)
    {
        b[j]=a[i];
        j++;
    }
    else
    {
        b[j]=a[i+1];
    }
    i++;
}
b[j]='\0';
puts(b);
return 0;
}
