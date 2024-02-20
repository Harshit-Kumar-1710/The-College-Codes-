#include<stdio.h>
int main()
{int a[90][80],i,j,n,m,k,temp;
printf("Enter the Rows and Columns of the Array\n");
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        for(k=j+1;k<m;k++)
        {
            if(a[i][j]<a[i][k]) // a[0][0]>a[0][2] 5 2 3
            {
                temp=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=temp;

            }
        }
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(a[j][i]<a[k][i]) // a[0][0]>a[0][2] 5 2 3
            {
                temp=a[j][i];
                a[j][i]=a[k][i];
                a[k][i]=temp;

            }
        }
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("%d ",a[i][j]);
    }
printf("\n");
}
return 0;
}

