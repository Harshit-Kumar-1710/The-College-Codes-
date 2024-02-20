#include<stdio.h>
int main()
{int n,i,j;
printf("Enter the No. of the Rows\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=1;j<=n;j++)
    {
        printf("%c",j+64);
    }
printf("\n");
}
return 0;
}