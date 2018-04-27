/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    High Sparrow
*/

#include<iostream>
using namespace std;

int main()
{
    int t;
    long long int i,j,num,k,max;

    cin>>t;
    while(t--)
    {
        cin>>num>>k;

        if((k==1)||(k==num))
            cout<<"0\n";
        else if(k>num)
            cout<<num<<"\n";
        else
        {
            max=0;
            for(i=2;i<=k;i++)
            {
                j=num%i;
                if(max<j)
                    max=j;
            }
            cout<<max<<"\n";
        }
    }
    return 0;
}
