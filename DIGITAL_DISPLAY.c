#include<stdio.h>
#include<string.h>

int main()
{
    int count(char[]);
    char str[100];
    int l=0,length=0;
    fflush(stdin);
    gets(str);
    length=strlen(str);
    l=count(str);
    printf("%d",l);
    return 0;
}
int count(char st[])
{
    int i=0,len=0,sum=0;
    len=strlen(st);
    for(i=0;i<len;i++)
    {
        if(st[i]=='0')
            sum=sum+6;
        if(st[i]=='1')
            sum=sum+2;
        if(st[i]=='2')
            sum=sum+5;
        if(st[i]=='3')
            sum=sum+5;
        if(st[i]=='4')
            sum=sum+4;
        if(st[i]=='5')
            sum=sum+5;
        if(st[i]=='6')
            sum=sum+6;
        if(st[i]=='7')
            sum=sum+3;
        if(st[i]=='8')
            sum=sum+7;
        if(st[i]=='9')
            sum=sum+6;
    }
    return sum;
}
