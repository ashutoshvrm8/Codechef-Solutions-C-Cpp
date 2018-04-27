#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,l,i,flag;
    string a,b;

    cin>>t;

    while(t--)
    {
        l=flag=0;
        cin>>a>>b;

        l=a.length();

        for(i=0;i<l;i++)
        {
            if(a[i]==b[i] || a[i]=='?' || b[i]=='?')
            {}

            else
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
            cout<<"No\n";
        if(flag==0)
            cout<<"Yes\n";


    }

    return 0;
}
