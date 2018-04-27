/*  Ashutosh Verma-ashutoshvrm8@gmail.com
    worst code ever
*/

#include <stdio.h>

int main()
{
    long long int t,n,a[30],j,i=4,k=0;

    while(k<30)
    {
        a[k]=i-1;
        i*=2;
        k++;
    }

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);
        if(n%2==0)
        {
            printf("-1\n");
            continue;
        }
        if(n==1)
        {
            printf("2\n");
            continue;
        }

        k=0;
        for(i=0;i<30;i++)
        {
            if(n==a[i])
            {
                k=1;
                printf("%lld\n",(n/2));
                break;
            }
        }

        if(k==0)
            printf("-1\n");
    }

	return 0;
}
