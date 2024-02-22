#include<stdio.h>
int main()
{char a[90],b[90],c[80];
int i=0,k=0,j=0;
printf("Enter the First String\n");
fgets(a,80,stdin);
printf("Enter the Second String\n");
fgets(b,80,stdin);
while(a[i]!='\0')
{
    if(b[i]==a[i])
    {
        c[k]=a[i];
        k++; 
    }
i++;
}
while(b[j]!='\0')
{
    c[k]=b[j];
    k++;
    j++;
}
c[k]='\0';
printf("%s",c);
return 0;
}