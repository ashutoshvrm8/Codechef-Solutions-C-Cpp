#include<stdio.h>

int main()
{
    long long int n,p,m,count=0;
    scanf("%lld%lld", &n,&m);
    while(n--)
    {
        scanf("%lld", &p);
        if(p%m==0)
            count++;
    }
    printf("%ld\n", count);
    return 0;
}
