#include<stdio.h>

int main()
{
    int t,n,temp,k,num;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        if((n==1)||(n==2)||(n==3))
        {
            printf("0\n");
        }

        else
        {
            if(n%2==0)
            {
                temp=(n/2)-1;
                printf("%d\n", temp*(temp+1)/2);
            }
            else
            {
                k=n-1;
                num=(k/2)-1;
                printf("%d", num*(num+1)/2);
            }
        }
    }

    return 0;
}
