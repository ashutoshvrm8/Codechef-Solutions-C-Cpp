#include<stdio.h>
#include<math.h>

int check_prime(unsigned long long int num)
{
    unsigned long long int j,count=0,r;

    for(j=2;j<=sqrt(num);j++)
    {
        if(num%j==0)
        {
            count++;
            r=0;
            break;
        }
    }

    if(count==0)
        r=1;

    return r;
}

int main()
{
    int t,flag;
    unsigned long long int n,i;

    flag=0;
    scanf("%llu", &n);

    for(i=n/2;i>=2;i=i-2)
    {
        if(n%i==0)
        {
            flag=check_prime(i);

            if(flag==1)
            {
                printf("%llu\n", i);
                break;
            }
        }
    }

    return 0;
}
