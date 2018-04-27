#include<stdio.h>

int main()
{
    long long int t,i;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int count=0;
        long long int present,prev,last_mismatch=-1;
        scanf("%lld",&prev);
        for(i=1;i<n;i++)
        {
            scanf("%lld",&present);
            if(present!=prev)
            {
                if(count==0)
                {
                    count += 2;
                    last_mismatch=i;
                    prev=present;
                    continue;
                }
                else
                {
                    if((i-last_mismatch)>1)
                    {
                        count+=2;
                        prev=present;
                        continue;
                    }
                    else
                    {
                        count+=1;
                        prev=present;
                        continue;
                    }

                }

            }
            else
            {
                prev=present;
                continue;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
