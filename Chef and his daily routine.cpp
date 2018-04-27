#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    int t,i,string_length=0,ok;

    char routine[100000];

    cin>>t;

    while(t--)
    {
        cin>>routine;

        i=0;
        ok=1;

        string_length=strlen(routine)-1;

        while(i!=string_length)
        {
            if(routine[i]=='C' && ((routine[i+1]=='C') || (routine[i+1]=='E') || (routine[i+1]=='S')))
                i++;
            else if(routine[i]=='E' && ((routine[i+1]=='E') || (routine[i+1]=='S')))
                i++;
            else if(routine[i]=='S' && routine[i+1]=='S')
                i++;
            else
            {
                ok=0;
                cout<<"no"<<"\n";
                break;
            }
        }

        if(ok==1 && i==string_length)
            cout<<"yes"<<"\n";
    }

    return 0;
}
