#include<stdio.h>
int main()
{int i=0,c=0;
char a[90],b[80];
printf("Enter the First String\n");
fgets(a,80,stdin);
while(a[i]!='\0')
{
    b[i]=a[i];
    i++;
}
b[i]='\0';
i=i-1;
puts(b);
printf("The No. of the Characters are :%d",i);
return 0;
} 