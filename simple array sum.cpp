/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
using namespace std;

int main()
{
    int n,s=0,i,arr[1000];

    cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            s+=arr[i];
        }

        cout<<s;

    return 0;
}
