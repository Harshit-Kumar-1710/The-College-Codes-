#include<stdio.h>
void arr(int[],int);
int main()
{int a[60],n,i;
// Creating an Array
printf("Enter the Size of an Array\n"); 
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
arr(a,n); // Calling a Function
return 0;
}
void arr(int b[],int n)
{int i;
for(i=0;i<n;i++)
{
    printf("%d ",b[i]);
}
}