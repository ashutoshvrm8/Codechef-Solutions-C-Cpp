/*
Author: Ashutosh Verma
ashutoshvrm8@gmail.com
GEU
*/

#include<iostream>
using namespace std;

int main()
{
    int t;
    long long int n;

    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n%6!=0)
            cout<<"Chef\n";
        else
            cout<<"Misha\n";
    }

    return 0;
}
