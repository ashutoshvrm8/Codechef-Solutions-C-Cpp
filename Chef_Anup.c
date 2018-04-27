#include <stdio.h>

int main()
{
    int t;
    long long n,k,l,i,j,z;
    long long int a[1000];
    scanf("%d",&t);
    while(t--)
    {
        j=1;
        scanf("%lld %lld %lld",&n,&k,&l);
        for(i=0;i<n;i++)
        {
            a[i]=1;
        }
        while(l>k)
        {
            l=l-k;
            a[j]++;
            if(a[j]>k)
            {
                a[j]=1;
                z=j+1;
                while(1)
                {
                    a[z]++;
                    if(a[z]<=k)
                        break;
                    else
                        a[z]=1;
                        z++;
                }
            }
        }
        a[0]=a[0]+l-1;
        for(i=n-1;i>=0;i--)
            printf("%lld ",a[i]);
        printf("\n");
    }
    return 0;
}
