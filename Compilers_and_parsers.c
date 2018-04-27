#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    long long int count=1,len=0,i,l;
    char str[1000001];

    scanf("%lld", &t);


    while(t--)
    {
        fflush(stdin);
        gets(str);

        count=1;
        len=0;

        if(str[0]=='>')
        {
            printf("0\n");
        }

        if(str[0]=='<')
        {
            l=strlen(str);

            for(i=1;i<l;i++)
            {
                if(str[i]=='<')
                {
                    count++;
                }
                if(str[i]=='>')
                {
                    count--;
                }
                if(count==0)
                {
                    len=i++;

                    if(str[i+1]=='>')
                    {
                        break;
                    }
                }
            }

            printf("%lld\n", len);
        }
    }
}
