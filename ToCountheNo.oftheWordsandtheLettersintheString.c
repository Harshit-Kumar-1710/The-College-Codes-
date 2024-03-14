#include<stdio.h>
int main()
{int c=0,i=0,cw=0;
char str[90];
printf("Enter the String\n");
fgets(str,80,stdin);
while(str[i]!='\0')
{
    if(str[i]==' ')
    {
    cw=cw+1;
    }
    else
    {
    c++;
    }
    i++;
}
c=c-1;
printf("The No. of the Letters are :%d",c);
printf("The No. of the Words are :%d",cw+1);
return 0;
}