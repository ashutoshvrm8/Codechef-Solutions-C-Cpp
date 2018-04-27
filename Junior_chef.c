#include<stdio.h>

int main()
{
    int q;
    long long int i,j,sum,a,b;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%lld%lld",&a,&b);
        sum=0;
        for(i=a;i<=b;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(j%2==0)
                    sum=sum-i;
                else
                    sum=sum+i;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
