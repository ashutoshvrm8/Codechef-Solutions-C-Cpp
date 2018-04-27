#include<iostream>
using namespace std;

int main()
{
    int t,n,k,d;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        d=n%100;

        if(d%k==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
