/*  Ashutosh Verma -ashutoshvrm8@gmail.com
    scanf() and printf() are really fast...
*/

#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    long long int arr[20000],t,n,m,z,c,i,k,flag=0;

    scanf("%lld",&t);

    while(t--)
    {
        cin>>n>>m;

        flag=0;
        k=z=m;

        for(i=0;i<m;i++)
        {
            scanf("%lld",&arr[i]);

            if(arr[i]!=1)
                flag=1;
        }

        if(flag==0)
            cout<<z/2<<"\n";

        else
        {
            c=i=0;

    		sort(arr,arr+z);

    		while(i!=k-1)
    		{
    			arr[i]--;
    			arr[k-2]=arr[k-2]+arr[k-1];
    			k--;

    			if(arr[i]==0)
    				i++;

    			c++;
    		}
    		printf("%lld\n",c);
        }

    }
    return 0;
}
