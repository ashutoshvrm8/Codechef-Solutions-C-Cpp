#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    long int count=1,len=0,i,l;

    cin>>t;


    while(t--)
    {
        char str[1000001];
        cin>>str;

        count=1;
        len=0;

        if(str[0]=='>')
        {
            cout<<0<<"\n";
        }

        if(str[0]=='<')
        {
            l=strlen(str);

            for(i=1;i<l;i++)
            {
                if(str[i]=='<')
                {
                    count++;
                }
                if(str[i]=='>')
                {
                    count--;
                }
                if(count==0)
                {
                    len=(i+1);

                    if(str[i+1]=='>')
                    {
                        break;
                    }
                }
            }
            cout<<len<<"\n";
        }
    }
}
