#include<stdio.h>
int dupli(int[],int);
int main()
{int a[90],n,i,b;
printf("Enter the Size of an Array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
dupli(a,n);
return 0;
}
int dupli(int b[],int n)
{int i,j,c=0;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(b[i]==b[j])
        {
            printf("The Duplicate Elements in this Array are:");
            printf("%d \n",b[i]);
            break;
        }
    }
}
}