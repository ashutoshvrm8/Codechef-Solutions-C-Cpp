#include<iostream>
using namespace std;

int main()
{
    long long int n,x,y,t,i,res;

    cin>>t>>n;

    while(t--)
    {
        res=1;

        cin>>x>>y;

        for(i=0;i<y;i++)
        {
            res=res*x;
            res=res%n;
        }

        cout<<res<<"\n";
    }
}
