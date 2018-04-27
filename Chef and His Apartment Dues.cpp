#include<iostream>
using namespace std;

int main()
{
    int t,n,i,due,k,count_k,count_remaining,trigger;

    cin>>t;

    while(t--)
    {
        i=due=k=count_k=count_remaining=trigger=0;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>k;

            if(k==0)
            {
                count_k++;
                trigger=1;
            }

            if(trigger)
            {
                count_remaining++;
            }
        }

        due=(count_k*1000)+(count_remaining*100);

        cout<<due<<"\n";
    }

    return 0;
}
