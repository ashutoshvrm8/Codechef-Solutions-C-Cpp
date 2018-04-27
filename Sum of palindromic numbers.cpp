/*  Ashutosh Verma-ashutoshvrm8@gmail.com
    :p
*/

#include<iostream>
using namespace std;

int main()
{
    int left,n,i,right,faltu_ka_variable,sum,t,ulta;

    ios::sync_with_stdio(false);

    cin>>t;

    while(t--)
    {
    	cin>>left>>right;
        sum=ulta=0;

        for(i=left;i<=right;i++)
        {
            ulta=0;
            faltu_ka_variable=i;

            while(faltu_ka_variable!=0)
            {
                ulta=ulta*10;
                ulta=ulta+faltu_ka_variable%10;
                faltu_ka_variable=faltu_ka_variable/10;
            }

            if(i==ulta)
                sum=sum+i;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
