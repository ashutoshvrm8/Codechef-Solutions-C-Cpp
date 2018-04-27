#include<iostream>
using namespace std;

int main()
{
    int t,n,arr[101],temp,flag,i,j,c;

    cin>>t;

    while(t--)
    {
        cin>>n;

        flag=c=0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n;i++)
        {
            temp=arr[i];
            c=0;

            for(j=0;j<n;j++)
            {
                if(temp==arr[j])
                    c++;
            }

            if(c>=2)
                flag=1;
        }

        if(flag==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
