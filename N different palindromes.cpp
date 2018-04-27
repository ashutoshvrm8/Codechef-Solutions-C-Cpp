/*
the_wolverine
Ashutosh Verma - ashutoshvrm8@gmail.com
Submitting on behalf of team wishmegoodluck
*/

#include<bits/stdc++.h>
#define damn 26
using namespace std;

void wake_up_gaurav_bhatt()
{
    /*damn that boy is is sleeping*/
}

int main()
{
    int t;
    long long int n,re,i=0,q=0,position,mod26,count=0;
    char ch;

    cin>>t;

    while(t--)
    {
        cin>>n;

        re=n;

        position=n/damn;
        mod26=n%damn;

        for(i=0;i<position;i++)
            cout<<"abcdefghijklmnopqrstuvwxyz";

        for(q=0;q<mod26;q++)
            printf("%c",('a'+q));

        cout<<"\n";
    }
}
