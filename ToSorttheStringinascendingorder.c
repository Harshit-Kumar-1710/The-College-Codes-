#include<stdio.h>
#include<string.h>
int main()
{char a[90],b[90];
int i,j,l,min,c;
printf("Enter the String\n");
fgets(a,90,stdin);
l=strlen(a);
l=l-1;
for(i=1;i<l;i++)
{
    for(j=i+1;j<l;j++)
        if(a[i]>a[j])
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
}
a[i]='\0';
printf("%s",a);
return 0;
}