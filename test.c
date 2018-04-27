#include<stdio.h>

int main()
{
    long long int t,i,n,a[100000],count;
    scanf("%lld", &t);
    while(t--)
    {
        count=0;
        scanf("%lld", &n);
        for(i=0;i<n;i++)
        {
            scanf("%lld", &a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
                count++;
        }
        count*=2;
        if(a[0]!=a[1])
            count--;
        printf("%lld\n", count);
    }
    return 0;
}
