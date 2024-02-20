#include<stdio.h>
int main()
{int a[90][809],r,c,i,j,l,b[90][80],d[45][60];
printf("Enter the Rows and the Columns of the 2-D Array\n");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            d[i][j] = 0;
            for (l = 0; l < c; l++)
            {
                d[i][j] = d[i][j] + a[i][l] * b[l][j];
            }
            printf("%d", d[i][j]);
            printf("\t");
        }
        printf("\n");
    }
return 0;
}