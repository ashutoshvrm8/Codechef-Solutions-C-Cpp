#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int t,n,arr[100000],i,max,sum,z,pro;

    cin>>t;

    while(t--)
    {
        cin>>n;
        z=n;
        sum=0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        sort(arr,arr+z);

        if(arr[0]==arr[n-1])
            cout<<"0\n";

        else
        {
            max=arr[n-1];
            sum-=max;

            pro=max*(n-1);

            cout<<pro-sum<<"\n";


        }
    }

    return 0;
}
