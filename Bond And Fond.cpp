#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,k,diff;

    cin>>t;

    while(t--)
    {
        cin>>n;

        k=1;
        diff=0;

        diff=abs(k-n);

        while(k<n)
        {
            k*=2;

            if(abs(k-n)<diff)
                diff=abs(k-n);
        }

        cout<<diff<<"\n";
    }

    return 0;
}
