#include<stdio.h>

int main()
{
    int t,n,i;
    long long int ans;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d",&n);
        ans=1;
        ans=n*(n+1)*pow(2,(n-2));
        printf("%lld\n",ans);
    }
    return 0;
}
