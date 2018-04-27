/*Ashutosh Verma - ashutoshvrm8@gmail.com
  Jon Snow is dead :(
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{

    long long int t,i=0,arr[6],top,bottom,flag;
    string s;

    cin>>t;

    while(t--)
    {
        top=bottom=flag=0;

        for(i=0;i<6;i++)
        {
            cin>>s;

            if(s=="black")
                arr[i]=10;
            else if(s=="blue")
                arr[i]=20;
            else if(s=="red")
                arr[i]=30;
            else if(s=="green")
                arr[i]=40;
            else if(s=="yellow")
                arr[i]=50;
            else if(s=="orange")
                arr[i]=60;
        }

        top=arr[4];
        bottom=arr[5];

        if(top==arr[0] || top==arr[1])
        {
            if(top==arr[2] || top==arr[3])
                flag=1;
        }

        if(bottom==arr[0] || bottom==arr[1])
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
