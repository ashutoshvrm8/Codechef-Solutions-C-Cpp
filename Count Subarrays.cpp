/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    I love Counter Strike, but i really suck :(
*/

#include<iostream>
using namespace std;

int main()
{
    long long int t,n,arr[100000],c,i,temp;

    cin>>t;

    while(t--)
    {
        cin>>n;

        c=0;

		for(i=0;i<n;i++)
			cin>>arr[i];

		i=0;

		while(i<n)
		{
            c++;
            temp=1;

			while(i+temp<n)
			{
				if(arr[temp+i]>=arr[temp+i-1])
                    c=c+(temp+1);
				else
					break;
					temp++;
			}
			i=i+temp;
		}
		cout<<c<<"\n";
    }
    return 0;
}
