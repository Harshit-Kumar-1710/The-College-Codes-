#include<stdio.h>
void arr(int [],int);
int main()
{int a[70],n,i;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
arr(a,n);
return 0;
}
void arr(int b[],int n)
{int i;
for(i=n-1;i>=0;i--)
{
    printf("%d",b[i]);
}
}