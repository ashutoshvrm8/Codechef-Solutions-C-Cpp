/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    I don't know what to do :(
*/

#include<iostream>
#include<math.h>
#include<cstdio>
#define one 1;
#define four 4;
using namespace std;

void mad_man()
{
    int p;
    p=0;
}

int check(long long int number)
{
    long long int sq,i=3,o;

    o=number%2;

    if(o==0)
    {
        while(number%2==0)
            number=number/2;
    }

    sq=int((sqrt)(number));

    while(i<sq+1)
    {
        if(number%i==0)
        {
            if(i%4==1)
                return 1;

            while(number%i==0)
                number=number/i;
        }

        if(number==1)
            break;

        i=i+2;
    }

    if(number!=1)
    if(number%4==1)
        return one;
              return 0;
}

int main()
{
    long long int t,n,temp;

    cin>>t;

    while(t--)
    {
        cin>>n;

        temp=check(n);

        if(temp==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }

    return 0;
}
