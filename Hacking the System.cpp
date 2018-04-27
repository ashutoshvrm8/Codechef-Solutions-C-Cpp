/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
#include<string>
using namespace std;

string n1,n2;

int main()
{
    int l,i,flag=0;

    cin>>n1>>n2;

    l=n1.length();

    for(i=0;i<l;i++)
    {
        if(n1[i]!=n2[i])
            flag++;
    }

    if(flag>=2)
        cout<<"loses";
    else
        cout<<"wins";

    return 0;
}
