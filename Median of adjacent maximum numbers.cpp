/*

-=-=-=-=-=-=- V E R M A =-=-=-=-=-=-=-

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    int i,j,len,median,start;

    cin>>t;

    while(t--)
    {
        cin>>n;

        len=2*n;

        int arr[len];

        median=(len+1)/2;

        for(i=0;i<len;i++)
            cin>>arr[i];

        sort(arr,arr+len);

        i=1;
        start=j=0;

        int temp[len];

        while(i<len && j<len)
        {
            temp[i]=arr[n++];
            i=i+2;
            temp[j]=arr[start++];
            j=j+2;
        }

        cout<<temp[median]<<"\n";

        for(i=0;i<len;i++)
            cout<<temp[i]<<" ";

        cout<<"\n";
    }

    return 0;
}
