#include<stdio.h>

long int rev(long int n)
{
    long int rev=0;

    while(n)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}

int main()
{
    int t;
    long int n1,n2,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld%ld",&n1,&n2);

        n1=rev(n1);
        n2=rev(n2);

        sum=n1+n2;

        sum=rev(sum);

        printf("%ld\n",sum);
    }
    return 0;
}
