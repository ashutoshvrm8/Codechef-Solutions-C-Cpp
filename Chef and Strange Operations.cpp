#include <iostream>
#define mod 1000000007
using namespace std;
unsigned long long pow(unsigned long long a,unsigned long long b)
{
    if(b==0) return 1;
    else if(b%2==0) return pow(a*a%mod,b/2);
    else return pow(a,b-1)*a%mod;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long n,x,m,i,sum=0;
        cin>>n>>x>>m;
        n=n%mod;
        x=x%mod;
        m=m%mod;
        unsigned long long a[100003]={0};
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i]=a[i]%mod;
        }
        unsigned long long multiplier=1;
        unsigned long long j=0;
        for(i=x;i>0;i--)
        {
            sum=sum%mod;
            multiplier=multiplier%mod;


            sum=sum+(multiplier*a[i])%mod;
            multiplier=(((multiplier*(m+j))%mod)%mod*(pow(j+1,mod-2)%mod))%mod;
            j=(j+1)%mod;
        }
        sum=sum%mod;
        cout<<sum<<endl;
    }
    return 0;
}
