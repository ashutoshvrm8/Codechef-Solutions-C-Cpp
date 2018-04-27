#include<iostream>
#include<algorithm>
using namespace std;

long long int a[200000];

int main()
{
    long long int n,i;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    cout<<a[n-1]<<" "<<a[n-2];

    return 0;
}
