/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    I don't know how to talk to people :(
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long int t,n,count,temp,i,arr[1001],z;
    char ch;

    cin>>t;

    while(t--)
    {
        cin>>n;
        z=n;

        char str[z];

        count=temp=0;

        for(i=0;i<n;i++)
            cin>>str[i];

        for(i=0;i<z;i++)
        {
            cin>>ch;

            if(ch==str[i])
                count++;
        }

        for(i=0;i<=z;i++)
        {
            cin>>arr[i];

            if(i<=count)
            {
                if(arr[i]>temp)
                    temp=arr[i];
            }
        }

        if(count!=n)
            cout<<temp<<"\n\n";
        else
            cout<<arr[n]<<"\n\n";
    }
    return 0;
}
