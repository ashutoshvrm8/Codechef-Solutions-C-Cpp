#include<iostream>

using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string s;
  cin>>s;
  int l,bal=0,maxbal=0;
  l=s.length();
      for(int  i=0;i<l;i++)
      {
       if(s[i]=='(')
            bal++;
       else
        bal--;
        if(bal>maxbal)
            maxbal=bal;
      }
      for(int i=0;i<maxbal;i++)
        cout<<"(";
      for(int i=0;i<maxbal;i++)
        cout<<")";
      cout<<endl;
 }
}
