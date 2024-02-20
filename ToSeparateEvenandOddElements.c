#include<stdio.h>
int main()
{int a[80],b[90],c[70],i,n,j,k;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0,j=0,k=0;i<n;i++)

{
    if(a[i]%2==0)
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
printf("The Even Elements are:");
for(i=0;i<j;i++)
{
printf("%d ",b[i]);
}
printf("\n");
printf("The Odd Elements are:");
for(i=0;i<k;i++)
{
printf("%d ",c[i]);
}
}