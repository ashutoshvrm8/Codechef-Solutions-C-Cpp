#include<stdio.h>
#include<string.h>

int main()
{
    char n[250];
    long long int t,p,q;
    gets(n);
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &p,&q);
        if(q%p==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
