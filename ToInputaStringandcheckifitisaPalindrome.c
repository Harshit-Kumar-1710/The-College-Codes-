#include<stdio.h>
#include<string.h>
int main()
{char stri[90];
int i=0,flag=0,l,j;
printf("Enter the String\n");
fgets(stri,80,stdin);
l=strlen(stri);
l=l-1;
j=l-1;
while(i<=j)
{
    if(stri[i]!=stri[j])
    {
        flag=1;
        break;
    }
i++;
j--;
}
if(flag==0)
{
    printf("The String is a Palindrome");
}
else
{
    printf("The String is not a Palindrome");
}
return 0;
}