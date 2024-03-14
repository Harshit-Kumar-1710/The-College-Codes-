#include<stdio.h>
void search(int [],int,int);
int main()
{int a[50],n,i,k;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the Element to check in the Array\n");
scanf("%d",&k);
search(a,n,k);
return 0;
}
void search(int b[],int n,int k)
{int i;
for(i=0;i<n;i++)
{
    if(k==b[i])
    {
        printf("%d is present in the Array whose index is %d",k,i);
        break;
    }
    else
    {
        printf("%d is not present in the Array",k);
        break;
    }
}
}