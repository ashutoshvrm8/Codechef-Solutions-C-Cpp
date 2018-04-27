/*  Ashutosh Verma - ashutoshvrm8@gsmil.com
*/

#include<iostream>
using namespace std;

int main()
{
    int t,n,k,s,i,arr[1000];

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        s=0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i]<=0)
                s++;
        }

        if(s>=k)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}
