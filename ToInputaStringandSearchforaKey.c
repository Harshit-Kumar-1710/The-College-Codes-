#include<stdio.h>
int main()
{char a[90],key;
int i=0,flag=0;
printf("Enter the String\n");
fgets(a,90,stdin);
printf("Enter a Key");
scanf("%c",&key);
while(a[i]!='\0')
{
    if(key==a[i])
    {
        flag=1;
        printf("The Key is found at the Index %d",i);
        break;
    }
i++;
}
if(flag!=1)
{
    printf("The Key is not found");
}
return 0;
}