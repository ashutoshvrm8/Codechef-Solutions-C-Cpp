/*
Author: Ashutosh Verma
ashutoshvrm8@gmail.com
GEU
*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#define MAX 1000000
using namespace std;

char base_5[MAX];

int main()
{
    long long int t,n,rem,i,j,k,ans;

    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    cin>>t;

    while(t--)
    {
        rem=j=k=ans=0;
        char ch;

        cin>>n;
        n=n-1;

        i=0;
        while(n!=0)
        {
            rem=n%5;
            base_5[i]=rem+'0';
            i++;
            n=n/5;
        }
        base_5[i]='\0';

        k=i-1;

        for(j=0;j<=(i-1)/2;j++)
        {
            ch=base_5[j];
            base_5[j]=base_5[k];
            base_5[k]=ch;
            k--;
        }

        ans=atoll(base_5);
        cout<<(ans*2)<<"\n";
    }
    return 0;
}
