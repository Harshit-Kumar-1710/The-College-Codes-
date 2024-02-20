#include<stdio.h>
#include<string.h>
int main()
{int i,l;
char str[90];
printf("Enter a String\n");
fgets(str,20,stdin);
printf("%s",str);
l=strlen(str);
l=l-1;
printf("%d",l);
return 0;
}