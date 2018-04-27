#include<stdio.h>

int main()
{
    int t,m,n,hrs,m1,n1;
    scanf("%d", &t);

    while(t--)
    {
        hrs=0;
        scanf("%d%d",&n,&m);
        m1=m;
        n1=n;
        hrs=m/n;
        if(m1!=(hrs*n1))
        {
            hrs++;
        }
        printf("%d\n",hrs);
    }

    return 0;
}
