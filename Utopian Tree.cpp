/*  Ashutosh Verma - ashutoshvrm8@gsmil.com
*/

#include<iostream>
using namespace std;

int main()
{
    int t,n,i,s;

    cin>>t;

    while(t--)
    {
        cin>>n;

        s=1;

        for(i=0;i<n;i++)
        {
            if(i%2==0)
                s*=2;
            else
                s+=1;
        }

        cout<<s<<"\n";


    }

    return 0;
}
