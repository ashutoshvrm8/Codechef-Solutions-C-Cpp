/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    Not in ICPC team :(
    but happy for chef..... he's got a tractor :)
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int matrix[100][100],soil[100],sum[100],t,n,h,a,b,i,j,k,count,s,pos;

    cin>>t;

    while(t--)
    {
        count=s=pos=0;
        cin>>n>>h;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            for(j=0;j<n;j++)
            {
                if(j>=a && j<=b)
                    matrix[j][i]=0;/*spaces*/
                else
                    matrix[j][i]=1;/*soil blocks*/
            }
        }

        for(i=0;i<n;i++)
        {
            count=0;
            for(j=0;j<n;j++)
            {
                if(matrix[i][j]==1)
                    count++;
            }
            soil[i]=count;/*array having number of soil blocks in each row*/
        }

        /*Implementing secret move*/

        for(i=0;i<n-h+1;i++)
        {
            s=0;

            for(j=i;j<i+h;j++)
                s=s+soil[j];


            sum[pos]=s;
            pos++;
        }

        sort(sum,sum+pos);/*too lazy to write sorting code*/

        cout<<sum[0]<<"\n";

    }

    return 0;
}
