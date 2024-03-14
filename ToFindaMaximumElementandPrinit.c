#include<stdio.h>
int main()
{int max,i;
int arr[5]={12,56,34,78,23};
max=arr[0];
for(i=0;i<5;i++)
{
    if(max<arr[i])
    {
        max=arr[i];
    }
}
printf("The Maximum Element in the Array is :%d",max);
return 0;
}