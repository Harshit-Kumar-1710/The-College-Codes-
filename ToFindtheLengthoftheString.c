#include<stdio.h>
int main()
{int n,i=0,l=0;
char str[90];
printf("Enter the String\n");
fgets(str,80,stdin);
while(str[i]!='\0')
{
    l++;
    i++;
}
l=l-1;
printf("The Length of the String is %d",l);
return 0;
}