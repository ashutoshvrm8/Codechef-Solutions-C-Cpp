/*  Ashutosh Verma-ashutoshvrm8@gmail.com
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long int arr[50];
    int t,i;
    long long int sum,n,a,b,term;

    cin>>t;

    arr[0]=2;
    arr[1]=3;

    for(i=2;i<21;i++)
    {

        arr[i]=(arr[i-1])+(2*arr[i-2]);

    }

    while(t--)
    {
        cin>>n;
        n=n-1;
        cout<<arr[n]<<"\n";
    }

    return 0;
}
