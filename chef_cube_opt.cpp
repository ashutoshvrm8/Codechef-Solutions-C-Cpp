/*Ashutosh Verma - ashutoshvrm8@gmail.com
  Jon Snow is dead :(
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{

    long long int t,i=0,flag;
    char arr[6],top,bottom;
    string s;

    cin>>t;

    while(t--)
    {
        top=bottom=' ';
        flag=0;

        for(i=0;i<6;i++)
        {
            cin>>s;

            if(s=="black")
                arr[i]='b';
            else if(s=="blue")
                arr[i]='l';
            else if(s=="red")
                arr[i]='r';
            else if(s=="green")
                arr[i]='g';
            else if(s=="yellow")
                arr[i]='y';
            else if(s=="orange")
                arr[i]='o';
        }

        top=arr[4];
        bottom=arr[5];

        if(top==arr[0] || top==arr[1])
        {
            if(top==arr[2] || top==arr[3])
                flag=1;
        }

        else if(bottom==arr[0] || bottom==arr[1])
        {
            if(bottom==arr[2] || bottom==arr[3])
                flag=1;
        }

        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
