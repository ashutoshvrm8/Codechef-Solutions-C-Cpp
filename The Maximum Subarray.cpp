#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n,c=0,nc=0,arr[100000],sub[100000],i;
        bool pos=false;

        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i]>0)
            {
                nc+=arr[i];
                pos=true;
            }

            if(i==0)
                sub[i]=arr[i];
            else
                sub[i]=max(sub[i-1]+arr[i],arr[i]);
        }

        c=*(max_element(sub,sub+n));

        if(!pos)
            nc=*(max_element(arr,arr+n));


        cout<<c<<" "<<nc<<endl;
    }
    return 0;
}
