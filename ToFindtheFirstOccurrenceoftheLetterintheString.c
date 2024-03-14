#include<stdio.h>
int main()
{char a[90],input;
int i=0;
printf("Enter the String\n");
fgets(a,90,stdin);
printf("Input the Character");
scanf("%c",&input);
while(a[i]!='\0')
{
     if(a[i]==input)
     {
        break;
     }
i++;
}
printf("The First Occurrence of the Letter in the String is :%d",i);
return 0;
}