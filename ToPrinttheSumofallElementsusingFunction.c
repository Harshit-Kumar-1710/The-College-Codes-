#include<stdio.h>
int sumof(int,int);
int main()
{int a[90],n,c=0,i;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c=c+sumof(a[i],i);
}
printf("The Sum of the Elements of the Array is :%d",c);
return 0;
}
int sumof(int n,int i)
{int sum=0;
    sum=sum+n;
return sum;
}