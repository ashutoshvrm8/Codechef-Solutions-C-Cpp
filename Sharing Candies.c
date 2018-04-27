/*
the_wolverine
Ashutosh Verma - ashutoshvrm8@gmail.com
Submitting on behalf of team wishmegoodluck
*/

long long int cal_gcd(long long int a,long long int b)
{
    if (a==0)return b;
    return cal_gcd(b%a,a);
}

#include<stdio.h>

int main()
{
    long long int t,a,b,c,d,gcd,max_abs_diff,mod,ans;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

        gcd=cal_gcd(c,d);

        if((a-b)>(b-a))
            max_abs_diff=a-b;
        else
            max_abs_diff=b-a;

        mod=max_abs_diff%gcd;

        if(mod<(gcd-mod))
            ans=mod;
        else
            ans=gcd-mod;

        printf("%lld\n",ans);
    }
    return 0;
}
