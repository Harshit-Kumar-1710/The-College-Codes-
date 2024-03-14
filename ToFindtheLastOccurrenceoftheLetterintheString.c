#include<stdio.h>
#include<string.h>
int main()
{char a[90],input;
int i,l;
printf("Enter the String\n");
fgets(a,90,stdin);
l=strlen(a);
l=l-1;
i=l;
printf("Input the Character");
scanf("%c",&input);
while(a[i]!='\0')
{
     if(a[i]==input)
     {
        break;
     }
i--;
}
printf("The Last Occurrence of the Letter in the String is :%d",i);
return 0;
}