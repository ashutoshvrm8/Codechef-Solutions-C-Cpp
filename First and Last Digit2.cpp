/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include <iostream>
using namespace std;

int main()
{
	int t,n,s,first,last;

	cin>>t;

	while(t--)
	{
	    cin>>n;

	    last=n%10;
	    s=n;

	    while(s>0)
	    {
	        first=s%10;
	        s/=10;
	    }

	    cout<<first+last<<"\n";

	}
	return 0;
}
