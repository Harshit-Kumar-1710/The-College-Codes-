#include<stdio.h>
int main()
{int i=0,c=0,c1=0,c2=0;
char a[90];
printf("Enter the String");
fgets(a,80,stdin);
while(a[i]!='\0')
{
    if(a[i]=='A'||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u')
    {
        c++;
    }
    else if(a[i]==' ')
    {
        c1++;
    }
i++;
}
printf("The Number of the Vowels in the String are:%d\n",c);
printf("The Number of the Consonants in the String are:%d",i-c-c1-1);
return 0;
}