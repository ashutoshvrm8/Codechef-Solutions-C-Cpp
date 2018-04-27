/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int a[10],i;

    for(i=0;i<10;i++)
        cin>>a[i];

    sort(a,a+10);

    cout<<a[5]+a[7]+a[9];

    return 0;
}
