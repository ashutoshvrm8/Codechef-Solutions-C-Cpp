/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    Not in ICPC team :(
    but happy for chef..... he's got a tractor :)
*/

#include<iostream>
#include<algorithm>
using namespace std;

long long int space[1000000],sum[1000000];

int main()
{
    long long int t,n,h,a,b,i,j,s,pos,temp,res;

    cin>>t;

    while(t--)
    {
        s=pos=temp=res=0;
        cin>>n>>h;

        temp=h*n;

        for(i=0;i<n;i++)
            space[i]=0;

        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            for(j=0;j<n;j++)
            {
                if(j>=a && j<=b)
                    space[j]++;
                else
                    {}
            }
        }

        sort(space,space+n);

        /*for(i=0;i<n;i++)
            cout<<space[i]<<" ";*/

        for(i=n-1;i>=n-h;i--)
            s+=space[i];

        res=temp-s;

        cout<<res<<"\n";

    }

    return 0;
}
