/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int t,i,a[3];

    cin>>t;

    while(t--)
    {
        for(i=0;i<3;i++)
            cin>>a[i];

        sort(a,a+3);

        cout<<a[1]<<"\n";
    }

    return 0;
}
