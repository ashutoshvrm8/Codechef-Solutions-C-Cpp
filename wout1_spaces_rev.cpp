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
    long long int t,n,h,a,b,i,j,s,pos,temp,res,q,t1;

    cin>>t;

    while(t--)
    {
        s=pos=temp=res=q=t1=0;
        cin>>n>>h;

        t1=n-1;
        temp=h*n;

        for(i=0;i<n;i++)
            space[i]=0;

        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            a=t1-a;
            b=t1-b;
            for(j=0;j<n;j++)
            {
                if(j<=a && j>=b)
                    space[j]++;
                else
                    {}
            }
        }

        /*Implementing secret move*/

        for(i=0;i<n-h+1;i++)
        {
            s=0;

            for(j=i;j<i+h;j++)
                s=s+space[j];

            sum[pos]=s;
            pos++;
        }

        q=pos;

        /*for(i=0;i<pos;i++)
            cout<<sum[i]<<" ";*/

        sort(sum,sum+pos);

        /*for(i=0;i<pos;i++)
            cout<<sum[i]<<" ";*/

        res=temp-sum[q-1];

        cout<<res<<"\n";

    }

    return 0;
}
