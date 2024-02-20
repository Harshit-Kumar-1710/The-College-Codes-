#include<stdio.h>
int cubeofnum(); // A Function Declaration(A Return Type of an Output)
int main()
{
cubeofnum();
printf("%d",cubeofnum()); // A Function Calling
return 0;
}
int cubeofnum() // A Function Definition
{int num;
printf("Enter a Number\n");
scanf("%d",&num);
int cube; 
cube=num*num*num;
return cube;
}