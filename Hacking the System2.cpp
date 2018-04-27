/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
using namespace std;

int main()
{
    long long int n1,n2,flag,a,b;

    cin>>n1>>n2;

    flag=a=b=0;

    while(n1!=0 || n2!=0)
    {
        a=n1%10;
        b=n2%10;

        if(a!=b)
            flag++;

        n1/=10;
        n2/=10;
    }

    if(flag>=2)
        cout<<"loses\n";
    else
        cout<<"wins\n";

    return 0;
}
