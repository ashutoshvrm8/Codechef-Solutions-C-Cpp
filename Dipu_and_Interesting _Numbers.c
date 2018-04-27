#include<stdio.h>

int main()
{
    long long int max,t,count,l,r,i,j;
    scanf("%lld",&t);
    while(t--)
    {
        max=0;
        scanf("%lld %lld",&l,&r);
        for(i=l;i<=r;i++)
        {
            count=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                    count++;
            }
            if(count%2!=0)
                max=max+1;
        }
        printf("%lld\n",max);
    }
    return 0;
}
