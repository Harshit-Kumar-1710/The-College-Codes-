#include<stdio.h>
#include<string.h>
int main()
{int i,l,y,j;
char str[90],temp[90];
printf("Enter a String\n");
fgets(str,50,stdin);
printf("%s",str);
l=strlen(str);
l=l-1;
for(i=l;i>=0;i--)
{
    temp[j]=str[i];
    j++;
}
if(temp==str)
{
    printf("The String is a Palindrome");
}
else
{
    printf("The String is not a Palindrome");
}
return 0;
}