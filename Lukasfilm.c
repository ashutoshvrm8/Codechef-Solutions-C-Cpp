#include<iostream>
using namespace std;

int main()
{
    int n,k,arr[100000],i;

    cin>>n>>k;

    for(i=0;i<n;i++)
        cin>>arr[i];

    sort(arr);

    cout<<arr[k-1];

    return 0;
}
