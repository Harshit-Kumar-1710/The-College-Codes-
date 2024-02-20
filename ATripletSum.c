#include<stdio.h>
int main()
{int i,k,arr[7]={1,4,7,9,3,2,5},j,x=10,count=0;;
for(i=0;i<7;i++)
{
    for(j=i+1;j<7;j++)
    {
        for(k=j+1;k<7;k++)
            if(arr[i]+arr[j]+arr[k]==x)
            {
              count++;
              printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
            }
    }
}
printf("The Total No. of the Pairs is:%d",count);
return 0;
}