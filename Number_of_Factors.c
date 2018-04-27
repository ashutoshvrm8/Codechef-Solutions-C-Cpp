#include<stdio.h>

void prime_check()
{

}

int main()
{
    long long t,n,arr[100000],term,c,i,j;

    scanf("%lld", &t);

    while(t--)
    {
        term=1;
        c=0;
        scanf("%lld", &n);

        for(i=0;i<n;i++)
        {
            scanf("%lld", &arr[i]);
            term*=arr[i];
        }
        for(j=1;j<=term/2;j++)
        {
            if(term%j==0)
            {
                c++;
            }
        }
        printf("%lld\n", c);
    }

    return 0;
}
