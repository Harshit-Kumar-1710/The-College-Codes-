#include<stdio.h>
int main()
{int min,i;
int arr[5]={12,56,34,78,23};
min=arr[0];
for(i=0;i<5;i++)
{
    if(min>arr[i])
    {
        min=arr[i];
    }
}
printf("The Maximum Element in the Array is :%d",min);
return 0;
}