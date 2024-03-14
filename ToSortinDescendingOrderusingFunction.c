#include<stdio.h>
int sorting(int[],int); // Passing An Array and its no. of Elements using the Function
int main()
{int a[50],n,i;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
sorting(a,n); //Here,a,an Array Name acts as a pointer of the Array and is a base address of the Array(a[0])
return 0;
}
int sorting(int b[],int n) //Here b is an another array which receives the base address of the Previous Array
{int i,j,temp;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(b[i]<b[j])
        {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%d ",b[i]);
}
}
