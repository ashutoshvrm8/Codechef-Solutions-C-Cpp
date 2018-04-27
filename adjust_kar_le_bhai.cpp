#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        if((n==1)||(n==2)||(n==3))
        {
            cout<<0<<"\n";
        }
        else
        {
            if(n%2==0)
            {
                int temp;
                temp = (n/2)-1;
                cout<<temp*(temp+1)/2<<"\n";
            }
            else
            {
                 int  num = n-1;
                 int k = (num/2)-1;
                cout<<k*(k+1)/2<<"\n";
            }
        }
    }
}
