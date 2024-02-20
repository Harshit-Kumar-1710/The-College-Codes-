#include<stdio.h>
int main()
{int a[90],n,i,b[80],j;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0,j=0;i<n;i++)
{
    if(a[i]<0)
    {
        b[j]=a[i];
        j++;
    }
}

printf("The Negative Numbers are:");
for(i=0;i<j;i++)
{
    printf("%d ",b[i]);
}
return 0;
}