/*
the_wolverine
Ashutosh Verma - ashutoshvrm8@gmail.com
Submitting on behalf of team wishmegoodluck
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int t,diff=0;
    char w[100000],ch;
    long long k,l,i,alpha[26],count,min;

    scanf("%d",&t);

    while(t--)
    {
        count=min=0;

        scanf("%s%lld",&w,&k);
        l=strlen(w);

        for(i=0;i<26;i++)
            alpha[i]=0;

        for(i=0;i<l;i++)
        {
            ch=w[i];
            diff=ch-97;
            alpha[diff]+=1;
        }

        for(i=0;i<26;i++)
        {
            if(alpha[i]<=0)
                continue;
            else
            {
                min=alpha[i];
                break;
            }
        }

        for(i=0;i<26;i++)
        {
            if(min>alpha[i]  && alpha[i]!=0)
                min=alpha[i];
        }

        for(i=0;i<26;i++)
        {
            if(alpha[i]>min)
            {
                diff=alpha[i]-min;

                if(diff>k)
                {
                    count+=(diff-k);
                    alpha[i]-=(diff-k);
                }
            }
        }

        printf("%lld\n",count);
    }

    return 0;
}
