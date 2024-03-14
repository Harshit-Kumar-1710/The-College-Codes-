#include<stdio.h>
#include<string.h>
int main()
{int i=0,word=0,l;
char arr[90];
printf("Enter the String\n");
fgets(arr,90,stdin);
l=strlen(arr);
while(arr[i]!='\0')
{
    if(arr[i]==' ' && (arr[i+1]=='A' || arr[i+1]=='a'))
    {
        word++;
    }
    if(arr[0]=='A'|| arr[0]=='a')
    {
        word++;
    }
i++;
}
printf("The No. of the Words starting with a Character A are :%d",word);
return 0;
}