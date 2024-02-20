#include<stdio.h>
void Func(float); // A Function Declaration
int main()
{float radius;
printf("Enter a Radius\n");
scanf("%f",&radius);
Func(radius);
return 0;
}
void Func(float radius) 
{float area,Circumference,Diameter;
area=3.14*radius*radius;
Circumference=2*3.14*radius;
Diameter=2*radius;
printf("The Area of the Circle is :%f\n",area);
printf("The Circumference of the Circle is :%f\n",Circumference);
printf("The Diameter of the Circle is :%f\n",Diameter);
}