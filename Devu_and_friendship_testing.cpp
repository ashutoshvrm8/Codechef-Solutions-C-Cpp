#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t,d[100],n;
    scanf("%d",&t);
    int ans[t];

    for(int i=0;i<t;i++)
    {
        int count=0;
        scanf("%d",&n);

        for(int j=0;j<n;j++)
        {
            scanf("%d",&d[j]);
        }

        for(int k=1;k<=100;k++)
        {
            for(int l=0;l<n;l++)
            {
                if(d[l]==k)
                {
                    count++;
                    break;
                }
            }
        }

        ans[i]=count;
     }

    for(int i=0;i<t;i++)
    {
        printf("%d\n",ans[i]);
    }
    return 0;
}
