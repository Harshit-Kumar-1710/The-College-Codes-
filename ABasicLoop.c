#include<stdio.h>
int main()
{int h,ot=0,c;
for(c=1;c<=10;c++)
{
printf("Enter the Total no. of Hours an employee %d worked\n",c);
scanf("%d",&h);
if(h>40)
{
    ot=ot+(h-40);
printf("The No. of Overtime Hours the employee %d worked is :%d\n",c,h-40);
printf("The Overtime Pay for Employee %d is :%d\n",c,(h-40)*12);
}
else
{
    printf("There is no Overtime Pay for Employee %d\n",c);
}
}
printf("The Total No. of Overtime Hours for the 10 Employees is :%d",ot);
printf("The Total Overtime Pay for the 10 Employees is :%d",ot*12);
}