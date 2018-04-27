#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	while(cin>>a && cin>>b && cin>>c)
    {
        if(a>b)
        {
            if(a>c)
            {
                cout<<a;
            }
            else
            {
                cout<<c;
            }
        }
        else
        {
            cout<<b;
        }
        cout<<"\n";
    }
	return 0;
}
