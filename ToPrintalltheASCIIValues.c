#include<stdio.h>
int main()
{int i=0;
while(i<=255)
{
    char a=(char)i;
    printf("%d -> %c\n",i,a);
    i++;
}
return 0;
}