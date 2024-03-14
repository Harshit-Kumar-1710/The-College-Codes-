#include<stdio.h>
int main()
{int a[90],n,i,j,count=1;
printf("Enter the Size of the Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    count=1;
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            count=count+1;
            printf("The Frequency of %d in this Array is :%d",a[i],count);
        }
    }
}
return 0;
}