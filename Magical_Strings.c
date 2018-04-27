#include<stdio.h>
#include<string.h>

int main()
{
    int t,tp=-1,i,ln,count=0,count1=0,test;
    char a[1000],st[1000];

    scanf("%d",&t);

    while(t--)
    {
        tp=-1;

        scanf("%s",a);

        ln=strlen(a);

        test=ln/2;

        if(ln%2==0)
        {
            for(i=0; i<ln; i++)
            {
                tp++;
                st[tp]=a[i];

                if(st[tp]==st[tp-1] && tp>=1)
                {
                    tp--;
                    tp--;
                }

            }

            if(tp==-1)
             count++;
        }
    }

    printf("%d",count);

    return 0;
}
