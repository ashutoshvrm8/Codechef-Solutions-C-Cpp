#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    int t,p,i,c,k;
    int pow[]={1,2,4,8,16,32,64,128,256,512,1024,2048};

    cin>>t;

    while(t--)
    {
        cin>>p;

        k=11;
        c=0;

        while(p!=0)
        {
            if(p<pow[k])
            {
                k--;
            }
            else
            {
                p-=pow[k];
                c++;
            }
        }
        cout<<c<<"\n";
    }

    return 0;
}
