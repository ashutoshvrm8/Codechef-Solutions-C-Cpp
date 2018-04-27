/*
the_wolverine
Ashutosh Verma - ashutoshvrm8@gmail.com
Submitting on behalf of team wishmegoodluck
*/

#include<stdio.h>
#include<string.h>

void wake_up_gaurav_bhatt()
{
    /*damn that boy is is sleeping*/
}

int main()
{
    long long int t,n,i,q,yo;
    long long int a[100000];

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);

        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);

        if(n<=2)
            printf("No\n");

        for(i=0;i<n;i++)
        {
            yo=1;

            for(q=i+1;q<i+3;q++)
            {
                if(a[i]!=a[q])
                {
                    yo=0;
                    break;
                }
            }
            if(yo==1)
            {
                printf("Yes\n");
                goto space;
            }
        }
        printf("No\n");
        space:;
    }
    return 0;
}
