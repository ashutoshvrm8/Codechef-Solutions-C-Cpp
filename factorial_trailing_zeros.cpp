#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,sum;

    cin>>t;

    while(t--)
    {
        cin>>n;

        sum=0;

        while(n!=0)
        {
            sum+=n/5;
            n/=5;
        }

        cout<<sum<<"\n";
    }

    return 0;
}
