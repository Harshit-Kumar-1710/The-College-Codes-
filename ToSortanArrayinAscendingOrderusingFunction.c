#include<stdio.h>
int sorting(int[],int);
int main()
{int a[50],n,i;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
sorting(a,n);
return 0;
}
int sorting(int b[],int n)
{int i,j,temp;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(b[i]>b[j])
        {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%d ",b[i]);
}
}
