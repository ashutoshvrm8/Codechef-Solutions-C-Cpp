/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,s1=0,s2=0,i,j,arr[100][100];

    cin>>n;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];

                if(i==j)
                    s1+=arr[i][j];

                if(i+j==n-1)
                    s2+=arr[i][j];
            }
        }

        cout<<abs(s1-s2);

    return 0;
}
