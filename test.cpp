#include<iostream>
using namespace std;

int main()
{
	int a,b,c,count=1;
	while(((if(cin>>a){count++;}) && (if(cin>>b){count++;}) && (if(cin>>c){count++;})) && count!=3)
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
        count=1;
    }
	return 0;
}
