/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    Morning Code :)
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,l,i;
    string a;

    cin>>t;

    while(t--)
    {
        cin>>a;

        l=a.length();

        cout<<a[0];

        for(i=0;i<l-1;i++)
            cout<<((a[i]-'0')^(a[i+1]-'0'));

        cout<<"\n";
    }

    return 0;
}
