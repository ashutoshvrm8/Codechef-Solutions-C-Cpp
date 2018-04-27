/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	long long int t,i,l,first,last;
	string s;
	char a,b;

	cin>>t;

	while(t--)
    {
        cin>>s;
        a=b=l=first=last=0;

        l=s.length();

        a=s[0];

        if(l>1)
        {
            b=s[l-1];
            last=b-48;
        }

        first=a-48;

        cout<<first+last<<"\n";

	}
	return 0;
}
