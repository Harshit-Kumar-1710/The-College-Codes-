#include<stdio.h>
int main()
{int i,n;
printf("Enter the No. of the Terms\n");
scanf("%d",&n);
for(i=4;i<=3*n+1;i+=3)
{
    printf("%d ",i);
}
return 0;
}