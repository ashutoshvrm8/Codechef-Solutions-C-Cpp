/*  Ashutosh Verma-ashutoshvrm8@gmail.com
*/

#include<iostream>
#include<string>
using namespace std;

int change(char c)
{
    int b;

    b=c-65;
    b=26-b;
    b+=65-1;

    return b;
}

int main()
{
	int t,i,a,n;

    cin>>t;

    string s;

	while(t--)
	{
        cin>>s>>n;

        for(i=n-1;i>=0;i--)
            cout<<s[i];

        for(i=n;s[i]!='\0';i++)
        {
            a=change(s[i]);
            cout<<char(a);
        }

		cout<<"\n";
	}
	return 0;
}
