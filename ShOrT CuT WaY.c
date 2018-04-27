#include<stdio.h>

int main()
{
    long long int t,m,i,s;
    scanf("%lld", &t);
    while(t--)
    {
        s=1;
        scanf("%lld", &m);
        if(m>0 && m<=14)
        {
            for(i=1;i<=m;i++)
            {
                s=(s*((4*i)-2))/i;
            }
            printf("%lld\n", s);
        }
    }
    return 0;
}
/* S1 = 1; Sn+1 = Sn(4n - 2)/n

Thus, if we begin with S1 = 1, we get the following sequence:

1; x 2/1 = 2; x 6/2 = 6; x 10/3 = 20; x14/4 = 70; etc. */
