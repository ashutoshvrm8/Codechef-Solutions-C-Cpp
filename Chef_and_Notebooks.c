#include<stdio.h>
int main()
{
    int x,y,k,p,c,diff;
    long long int t=0,n;
    scanf("%lld",&t);
    while(t--)
    {
        int flag=0;
        scanf("%d %d %d %lld",&x,&y,&k,&n);
        x=x-y;
        while(n--)
        {
            scanf("%d %d",&p,&c);
            if(c<=k && p>=x)
            {
                 flag=1;
                }
        }
        if(flag)
             printf("LuckyChef\n");
        else
            printf("UnluckyChef\n");
    }
    return 0;
}
