#include<stdio.h>
int main()
{int sum1=0,sum2=0,diff,i,arr[6]={12,56,32,78,41,23};
for(i=0;i<6;i++)
{
    if(i%2==0)
    {
        sum1=sum1+arr[i];
    }
    else
    {
        sum2=sum2+arr[i];
    }
}
diff=sum1-sum2;
printf("The Difference is :%d",diff);
return 0;
}