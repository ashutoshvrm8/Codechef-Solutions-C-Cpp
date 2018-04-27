#include <stdio.h>

int main(void)
{
    long long int t,a,b,c=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        long long int n=a^b;
        while(n)
        {
            n=n&(n-1);
            c++;
        }
        printf("%lld\n",c);
        c=0;
    }
return 0;
}
