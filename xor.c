#include<stdio.h>

int main()
{
    int t;
    long long int n,i,arr[100000],count_even=0,count_odd=0;
    scanf("%d", &t);
    while(t--)
    {
        count_even=count_odd=0;
        scanf("%lld", &n);
        for(i=0;i<n;i++)
        {
            scanf("%lld", &arr[i]);
            if(arr[i]%2==0)
                count_even++;
            else
                count_odd++;
        }
        printf("%lld\n", count_even*count_odd);
    }
    return 0;
}
