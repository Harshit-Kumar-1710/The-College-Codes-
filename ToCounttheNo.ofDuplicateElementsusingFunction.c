#include<stdio.h>
int dupli(int [],int);
int main()
{int a[60],i,n,p;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
p=dupli(a,n);
printf("The No. of the Duplicate Elements are :%d",p);
return 0;
}
int dupli(int q[],int n)
{int i,j,c=0;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(q[i]==q[j])
        {
            c++;
            break;
        }
    }
}
return c;
}