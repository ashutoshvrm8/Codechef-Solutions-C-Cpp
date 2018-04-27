#include<stdio.h>
#include<string.h>

int main()
{
    int t,l,i,flag=0;
    char str[200];
    scanf("%d", &t);
    while(t--)
    {
        l=0;
        fflush(stdin);
        gets(str);
        l=strlen(str);
        if(l>11)
            flag=0;
        else if(l==3 || l==4)
            flag=1;
        else
        {
            if(l==10 && str[0]=='1' && str[1]=='8' && str[2]=='0' && str[3]=='0')
                flag=1;
            if(l==11 && str[0]=='0' && str[1]!='0')
                flag=1;
            if(l==10 && str[0]!='0')
                flag=1;
        }
        if(flag==0)
            printf("false\n");
        else
            printf("true\n");
    }
    return 0;
}
