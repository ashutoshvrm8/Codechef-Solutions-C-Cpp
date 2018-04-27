#include<stdio.h>

int main()
{
    long long int arr[50];
    int t,i;
    long long int sum,n,a,b,term;
    scanf("%d", &t);

    arr[0]=1;
    arr[1]=2;

    for(i=2;i<21;i++)
    {

        arr[i]=(3*arr[i-2])+(2*arr[i-1]);

    }

    while(t--)
    {
        scanf("%lld", &n);
        n=n-1;
        printf("%lld\n", arr[n]);
    }

    return 0;
}
