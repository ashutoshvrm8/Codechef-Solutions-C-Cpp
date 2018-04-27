#include <iostream>
using namespace std;

int main()
{
    int t,i,l;
    string str;

    cin>>t;
    getline(cin,str);

    while(t--)
    {
        getline(cin,str);

        l=0;
        l=str.length();

        for(i=0;i<l;i++)
        {
            if(isalpha(str[i]))
            {
                if(str[i]=='Z')
                    cout<<"A";

                else if(str[i]=='z')
                    cout<<"a";

                else
                    cout<<(char)(((int)str[i])+1);
            }
        }
        cout<<"\n";
    }
    return 0;
}
