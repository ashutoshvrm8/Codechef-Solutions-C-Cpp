#include<stdio.h>
#include<string.h>

int main()
{
    char str[60];
    int l,n,flag,count=0;

    scanf("%d", &n);

    while(n--)
    {
        l=0;
        flag=1;

        fflush(stdin);

        gets(str);

        l=strlen(str);

        if(l%2!=0)
            flag=0;

        else
        {

        }

        if(flag==1)
            count++;

    }

    printf("%d", count);

    return 0;
}
