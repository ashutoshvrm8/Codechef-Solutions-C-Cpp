#include<stdio.h>
#include<string.h>

int main()
{
    int t=0,l=0,i=0,count=0;
    char str[110];
    scanf("%d", &t);
    while(t--)
    {
        fflush(stdin);
        scanf("%s",str);
        l=strlen(str);
        count=0;
        for(i=0;i<l;i++)
        {
            if(str[i]=='A' || str[i]=='D' || str[i]=='O' || str[i]=='P' || str[i]=='R'|| str[i]=='Q')
                count++;
            else if(str[i]=='B')
                count=count+2;
        }
        printf("%d\n", count);
    }
    return 0;
}
