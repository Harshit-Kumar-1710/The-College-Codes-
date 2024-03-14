#include<stdio.h>
int main()
{char a[90];
int i=0;
printf("Enter a String\n");
fgets(a,80,stdin);
while(a[i]!='\0')
{
    if(a[i]=='A'|| a[i]=='a'|| a[i]=='E'|| a[i]=='e'|| a[i]=='I'|| a[i]=='i'|| a[i]=='O'|| a[i]=='o'|| a[i]=='U' || a[i]=='u')
    {
        a[i]='$';
    }
i++;
}
printf("%s",a);
return 0;
}