#include<stdio.h>
int main()
{int i,arr[7]={1,4,7,9,3,2,5},j,x=10,count=0;;
for(i=0;i<7;i++)
{
    for(j=i+1;j<7;j++)
    {
            if(arr[i]+arr[j]==x)
            {
              count++;
              printf("(%d,%d)\n",arr[i],arr[j]);
            }
    }
}
printf("The Total No. of the Pairs is:%d",count);
return 0;
}