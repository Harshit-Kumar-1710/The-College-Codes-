#include<stdio.h>
int main()
{char a[90],b[90],c[70];
int i=0,j=0,k=0;
printf("Enter the First String\n");
fgets(a,90,stdin);
printf("Enter the Second String\n");
fgets(b,90,stdin);
while(a[i]!='\0')
{
    c[k]=a[i];
    k++;
    i++;
}
while(b[j]!='\0')
{
    c[k]=b[j];
    k++;
    j++;
}
c[k]='\0';
puts(c);
return 0;
}