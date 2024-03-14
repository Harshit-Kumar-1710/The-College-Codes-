#include<stdio.h>
int main()
{int a[90],i,n,b[80],j,c,f;
printf("Enter the Size of the Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    c=1,f=0;
    for(j=i;j<n;j++)
    {
        if(a[i]==a[j])
        {
            c=c+1;
        }
    
    }
}
}