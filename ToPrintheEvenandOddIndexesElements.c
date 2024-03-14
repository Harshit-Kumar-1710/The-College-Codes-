#include<stdio.h>
int main()
{int i,arr[6]={12,67,54,78,23,51};
for(i=0;i<6;i++)
{
    if(i%2==0)
    {
        arr[i]=arr[i]+10;
    }
    else
    {
        arr[i]=arr[i]*2;
    }
}
for(i=0;i<6;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}