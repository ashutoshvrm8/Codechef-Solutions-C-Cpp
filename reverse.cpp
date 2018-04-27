#include<iostream>
using namespace std;

int main()
{
    int t,temp,d,rev;
    cin>>t;

    while(t--)
    {
        temp=d=rev=0;
        cin>>temp;

        while(temp!=0)
        {
            d=temp%10;
            rev=(rev*10)+d;
            temp=temp/10;
        }

        cout<<rev<<"\n";
    }

    return 0;
}
