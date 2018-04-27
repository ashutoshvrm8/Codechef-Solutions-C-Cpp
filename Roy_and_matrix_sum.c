#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    long long int i,j,n,sum=0;
    scanf("%d", &t);
    while(t--)
    {
        sum=0;
        scanf("%lld", &n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                sum=sum+abs(i-j);
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
