/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    I like writing neat codes :)
*/

#include<iostream>
#include<math.h>

#define M 501
#define N 250002

using namespace std;

long long int arr[M][M],n1[N],n2[N];/*heap is the best :) */

int main()
{
	long long int t,n,i,j,size,sum,temp,t1,t2;

	cin>>t;

	while(t--)
    {
		cin>>n;
		size=n*n;

		sum=temp=t1=t2=0;

		for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }

		for(i=0;i<n;i++)
        {
			for(j=0;j<n;j++)
			{
			    temp=arr[i][j];

				n1[temp]=i+1;
				n2[temp]=j+1;
			}
        }

        /*for(i=1;i<=size;i++)
            cout<<n1[i];*/

        /*for(i=1;i<=size;i++)
            cout<<n1[i];*/

		for(i=2;i<=size;i++)
        {
            t1=fabs(n1[i]-n1[i-1]);
            t2=fabs(n2[i]-n2[i-1]);

            sum=sum+t1+t2;
        }

		cout<<sum<<"\n";
	}
	return 0;
}
