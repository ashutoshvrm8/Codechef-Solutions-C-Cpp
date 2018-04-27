#include<iostream>
using namespace std;
int main()
{
    int t, n, i, j, k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int x=0;
        int a[n];

        for(j=0;j<n;j++)
        {
            cin>>a[j];
            x=x+a[j];
            for(k=0;k<n;k++)
            {
                if(k!=j && a[k]!=0)
                {
                    a[k]--;
                    break;
                }
            }

            if(k==n)
            {
                cout<<-1;
                break;
            }
        }

        if(x!=n)
            cout<<-1;
    }

    cin.get();
    cin.get();
}
