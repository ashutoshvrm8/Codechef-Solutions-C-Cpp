#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,s1,c,s2,i;

    cin>>t;

    while(t--)
    {
        s1=s2=c=0;

        cin>>n;

        long long int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s1=s1+a[i];
        }

        sort(a,a+n);

        for(i=n-1;i>=0;i--)
        {
            s2=s2+a[i];
            s1=s1-a[i];

            c++;

            if(s2>s1)
                break;
        }

        cout<<c<<"\n";
    }
    return 0;
}
