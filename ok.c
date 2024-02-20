#include<stdio.h>
int main()
{int i,n;
char stri[70];
printf("Enter the Size of the String\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%s",&stri[i]);
}
stri[i]='\0';
printf("The String is %s",stri);
return 0;
}