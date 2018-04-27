#include<stdio.h>

int main()
{
    int t,rem,rev,p,q,n,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&p);
        scanf("%d",&q);
        while(p<=q)
        {
            n=p;
            rem=rev=0;
            while(n!=0)
            {
                rem=n%10;
                rev=(rev*10)+rem;
                n=n/10;
            }
            if(p==rev)
            {
                c++;
            }
            p=p+1;
        }
        printf("%d\n", c);
    }
    return 0;
}
