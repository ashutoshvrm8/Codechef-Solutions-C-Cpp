#include<stdio.h>

int main()
{
    long long int t=0,sum,num=0,i,half;
    scanf("%lld", &t);
    while(t--)
    {
        sum=0;
        i=1;
        scanf("%lld", &num);
        half=num/2;
        while(i<=half)
        {
            if(num%i==0)
            {
                sum=sum+i;
            }
            i++;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
