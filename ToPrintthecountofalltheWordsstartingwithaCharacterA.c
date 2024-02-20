#include<stdio.h>
#include<string.h>
int main()
{int i,n,word=0,l;
char arr[90];
printf("Enter the String\n");
fgets(arr,90,stdin);
l=strlen(arr);
for(i=0;arr[i]!='\0';i++)
{
    if(arr[i]==' ' && arr[i+1]=='A' || arr[i+1]=='a')
    {
        word++;
    }
}
printf("The No. of the Words starting with a Character A are :%d",word);
return 0;
}