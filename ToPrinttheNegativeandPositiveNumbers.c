#include<stdio.h>
int main()
{int a[90],n,i,b[80],c[90],j,k;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0,j=0,k=0;i<n;i++)
{
    if(a[i]>=0)
    {
        b[j]=a[i];
        j++;
    }
    else
    {
        c[k]=a[i];
        k++;
    }
}
printf("The Negative Numbers are:");
for(i=0;i<k;i++)
{
    printf("%d ",c[i]);
}
printf("\n");
printf("The Positive Numbers are:");
for(i=0;i<j;i++)
{
    printf("%d ",b[i]);
}
return 0;
}