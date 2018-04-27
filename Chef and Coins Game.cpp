/*
Author: Ashutosh Verma
ashutoshvrm8@gmail.com
GEU
*/

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    long long int n,q,t,x,i,j;

    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    cin>>n>>q;

    vector<long long int> a;

    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    sort(a.begin(),a.end());

    for(j=0;j<q;j++)
    {
        cin>>t;

        if(t>=a[0] && t<=a[n-1])
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
