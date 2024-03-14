#include<stdio.h>
#include<string.h>
int main()
{char a[90],b[90],c[80];
int i,k=0,j,l,w;
printf("Enter the First String\n");
fgets(a,80,stdin);
printf("Enter the Second String\n");
fgets(b,80,stdin);
l=strlen(a);
l=l-1;
w=strlen(b);
w=w-1;
for(i=0;i<l;i++)
{
    if(b[i]==a[i])
    {
        c[k]=a[i];
        k++; 
    }
}
for(j=0;j<w;j++)
{
    c[k]=b[j];
    k++;
}
c[k]='\0';
printf("%s",c);
return 0;
}