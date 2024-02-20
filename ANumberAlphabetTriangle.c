#include<stdio.h>
int main()
{int n,i,j;
printf("Enter the No. of the Rows\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(i%2==0)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
    }
    else
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    }
printf("\n");
}
return 0;
}