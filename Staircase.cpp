/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,k,p,q;

    cin>>p;
    q=p-1;

    for(i=1;i<=p;i++)
    {
        for(j=q;j>=1;j--)
            cout<<" ";

        for(k=1;k<=i;k++)
           cout<<"#";

        cout<<"\n";
        q--;
   }
   return 0;
}
