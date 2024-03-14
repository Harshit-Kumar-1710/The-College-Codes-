#include<stdio.h>
int main()
{int arr[6]={12,56,78,43,49,90},i,x=20,cg=0,cl=0,ce=0;
for(i=0;i<6;i++)
{
    if(arr[i]>x)
    {
        cg++;
    }
    else if (arr[i]<x)
    {
        cl++;
    }
    else
    {
        ce++;
    }
}
printf("The No. of elements greater than x are:%d\n",cg);
printf("The No. of elements lesser than x are:%d\n",cl);
printf("The No. of elements equal than x are:%d",ce);
return 0;
}