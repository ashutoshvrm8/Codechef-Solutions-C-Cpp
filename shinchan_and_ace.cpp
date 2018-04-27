#include <stdio.h>
#include<string.h>

int main(void)
{
    int t,arr[500];
    int i,sum,n;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++)
        {	scanf("%d",&arr[i]);
            sum+=arr[i];
        }

        if(sum%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    	return 0;
}
