#include<stdio.h>
#include<string.h>
int main()
{int l;
char stri[90];
printf("Enter the String\n");
fgets(stri,20,stdin);
l=strlen(stri);
l=l-1;
printf("%d",l);
return 0;
}