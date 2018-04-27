/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
using namespace std;

int main()
{
    long long int n,m,a,x,y;

    cin>>n>>m>>a;

    x=n/a;
    y=m/a;

    if((x*a)!=n)
        x++;

    if((y*a)!=m)
        y++;

    cout<<x*y;

    return 0;
}
