#include<stdio.h>
#include<string.h>
int main()
{int i=0,l=0;
char stri[90];
printf("Enter a String\n");
fgets(stri,20,stdin);
while(stri[i]!='\0')
{
    l++;
    i++;
}
l=l-1;
printf("%d",l);
return 0;
}