/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    I love Arya Stark :) ;)
*/

#include<iostream>
using namespace std;

int main()
{
    long long int t,n,k,ele,temp1,temp2,packet_count=0,rem=0;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        packet_count=rem=0;

        while(n--)
        {
           cin>>ele;

           if(rem>0)
           {
               if(rem>ele)
               {
                   rem=rem-ele;
                   ele=0;
               }
               else
               {
                   ele=ele-rem;
                   rem=0;
               }
            }
            if(ele>=k && ele>0)
            {
                temp1=ele/k;
                temp2=ele%k;

                if(temp2==0)
                {
                    packet_count=packet_count+temp1;
                }
                else
                {
                    packet_count=packet_count+temp1;
                    packet_count=packet_count+1;
                    rem=rem+k-temp2;
                }
            }
            else if(ele<k && ele>0)
            {
                packet_count++;
                rem=rem+(k-ele);
                ele=0;
            }
            if(rem>0)
                rem--;
        }

        cout<<packet_count<<"\n";
    }
    return 0;
}
