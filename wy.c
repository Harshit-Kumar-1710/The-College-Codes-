#include<stdio.h>
#include<string.h>
int main()
{int i,l;
char str[90];
printf("Enter a String\n");
fgets(str,50,stdin);
printf("%s",str);
l=strlen(str);
l=l-1;
for(i=l;i>=0;i--)
{
    printf("%c",str[i]);
}
return 0;
}