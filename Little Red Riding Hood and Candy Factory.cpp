/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int l=0,n;
	string a;
	char b;

	cin>>a;

    l=a.length();

    b=a[l-1];
	n=int(b)-48;

	if(n%2==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";

	return 0;
}
