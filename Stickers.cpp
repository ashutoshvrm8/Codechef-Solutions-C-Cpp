#include <iostream>
using namespace std;

int main()
{
    int t;
    long long int n,i,sum;
    cin>>t;
    while(t--)
    {
        n=sum=0;
        cin>>n;
        for(i=0;i<=n;i++)
        {
            sum+=i;
        }
        cout<<sum;
        cout<<"\n";
    }
    return 0;
}
