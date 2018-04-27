/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    Not in ICPC team :(
    but happy for chef..... he's got a tractor :)
*/

#include<iostream>
#include<algorithm>
using namespace std;

long long int soil[1000000],sum[1000000];

int main()
{
    long long int t,n,h,a,b,i,j,s,pos;

    cin>>t;

    while(t--)
    {
        s=pos=0;
        cin>>n>>h;

        for(i=0;i<n;i++)
            soil[i]=0;


        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            for(j=0;j<n;j++)
            {
                if(j>=a && j<=b)
                    {}
                else
                    soil[j]++;
            }
        }

        /*Implementing secret move*/

        for(i=0;i<n-h+1;i++)
        {
            s=0;

            for(j=i;j<i+h;j++)
                s=s+soil[j];


            sum[pos]=s;
            pos++;
        }

        sort(sum,sum+pos);/*too lazy to write sorting code*/

        cout<<sum[0]<<"\n";

    }

    return 0;
}
