#include<stdio.h>
int main()
{int a[60],i,n,j,c=0;
printf("Enter the Size of an Array\n");
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
            c++;
            break;
        }
    }
}
printf("The No. of Duplicate Elements are :%d",c);
return 0;
}