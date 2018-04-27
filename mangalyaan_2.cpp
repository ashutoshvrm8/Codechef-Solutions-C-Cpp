/*  Ashutosh Verma-ashutoshvrm8@gmail.com
    ICPC
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[100],t,n,p,count,i;

    cin>>t;

    while(t--)
    {
        count=0;
        cin>>n>>p;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=p)
                count++;
        }

        cout<<count<<"\n";

    }

    return 0;
}
