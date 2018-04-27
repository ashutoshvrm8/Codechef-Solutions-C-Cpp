#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int ans=1,i,n;
        scanf("%d",&n);
        int d[n];
        for(i=0;i<n;i++)
        scanf("%d",&d[i]);
        sort(d,d+n);
        for(i=1;i<n;i++)
        {
            if(d[i]==d[i-1])
            continue;
            else
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
