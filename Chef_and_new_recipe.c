#include<stdio.h>

int main()
{
    int t;
    long long int n,arr[100000],i,sum,min;

    scanf("%d", &t);

    while(t--)
    {
        sum=0;
        min=0;
        scanf("%lld", &n);

        for(i=0;i<n;i++)
        {
            scanf("%lld", &arr[i]);
            sum+=arr[i];
        }

        min=arr[0];

        for(i=1;i<n;i++)
        {
            if(arr[i]<min)
                min=arr[i];
        }

        sum=sum-min+2;

        if(min<2)
            sum=-1;



        printf("%lld\n", sum);
    }

    return 0;
}
