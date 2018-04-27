#include<stdio.h>
#define MAX 100000

int main()
{
    long long int n,q,i,j,k,sum;
    long long int arr[MAX];
    scanf("%lld", &n);
    for(k=0;k<n;k++)
    {
        scanf("%lld", &arr[k]);
    }
    scanf("%lld", &q);
    while(q--)
    {
        i=j=k=sum=0;
        scanf("%lld%lld",&i,&j);
        for(k=i-1;k<j;k++)
        {
            sum=sum+arr[k];
        }
        printf("%lld\n", sum);
    }
    return 0;
}
