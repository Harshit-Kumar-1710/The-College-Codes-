#include<stdio.h>
int main()
{int a[90],n,i,j,count=0;
printf("Enter the Size of the Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            count=count+1;
        }
    }
}
if(count>=1)
{
    printf("There are Duplicate Elements in the Array");
    printf("%d",count);
}
else
{
printf("There are no Duplicate Elements in the Array");
}
return 0;
}
