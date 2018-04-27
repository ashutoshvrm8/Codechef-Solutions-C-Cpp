/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
using namespace std;

int main()
{
    long long int t,n,s,d;

    cin>>t;

    while(t--)
    {
        cin>>n;
        s=d=0;

        while(n!=0)
        {
            d=n%10;
            s=s+d;
            n=n/10;
        }

        cout<<s<<"\n";
    }

    return 0;
}
