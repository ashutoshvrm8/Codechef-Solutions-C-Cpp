#include<stdio.h>

int main()
{
    long long int t,n,i,arr[100000],l,k;

    scanf("%lld", &t);

    while(t--)
    {
        k=0;
        scanf("%lld", &n);

        l=n;

        for(i=0;i<=l;i+=2)
        {
            arr[i]=i;
            k++;
        }

        while(k!=1)
        {
            for(i=0;i<k;i+=2)
            {
                arr[i]=i;
            }
            k=k/2;
        }

        printf("%lld\n", arr[0]);
    }

    return 0;
}
