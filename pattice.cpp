/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x,r,s=0,t,i=1,c=1;

    cin>>x>>r;
    s+=x;

    while(s!=r)
    {
        t=0;
        t=pow(2,i)*x;
        c++;
        i++;
        s+=t;
    }

    cout<<c;

    return 0;
}



/*the price of first item = 100

the price of second item = 2*100 = 200

the price of third item = (2^2)*100 = 400

total price R = 100+200+400 = 700*/
