#include<stdio.h>
void oddandeven(int);
void main()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d",&n);
    oddandeven(n);
}
void oddandeven(int num)
{
    if(num%2==0)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number is Odd");
    }
}
