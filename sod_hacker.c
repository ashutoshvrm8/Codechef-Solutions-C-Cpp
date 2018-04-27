#include<stdio.h>

int main()
{
    int sod(int);
    int t,n,s1=0,s2=0,sum1=0,sum2=0,res=0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        sum1=sod(n);
        s1=s1+sum1;
        sum2=sum2+n;
    }
    s2=sod(sum2);
    res=(s1%9)-(s2%9);
    printf("%d", res);
    return 0;
}

int sod(int n)
{
    int s=0,t=0,dig=0;
    t=n;
    while(t!=0)
        {
            dig=t%10;
            s=s+dig;
            t=t/10;
        }
    return s;
}
