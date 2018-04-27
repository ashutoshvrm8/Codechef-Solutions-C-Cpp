/*

-=-=-=-=-=-=- V E R M A =-=-=-=-=-=-=-

     E A S Y     A S     D O P E

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        cout<<n-a[n-1]<<"\n";
    }

    return 0;
}
