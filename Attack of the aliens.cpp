/*  Ashutosh Verma-ashutoshvrm8@gmail.com
*/

#include<iostream>
using namespace std;

int main()
{
    int t,n,arr[100],neg[100],pos[100],i,x,y;

    cin>>t;

    while(t--)
    {
        x=y=0;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i]>0)
            {
                pos[x]=1;
                x++;
            }
            else if(arr[i]<0)
            {
                neg[y]=-1;
                y++;
            }
        }

        for(i=0;i<y;i++)
            cout<<neg[i]<<" ";

        for(i=0;i<x;i++)
            cout<<pos[i]<<" ";

        cout<<"\n";
    }

    return 0;
}
