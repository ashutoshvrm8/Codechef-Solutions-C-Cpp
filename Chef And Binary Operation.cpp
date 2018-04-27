/*
Author: Ashutosh Verma
ashutoshvrm8@gmail.com
GEU
*/

/*
Becoming a goto fan :)
*/

#include<bits/stdc++.h>
#define max_size 1000000
using namespace std;

char str1[max_size],str2[max_size];

int main()
{
	int len,zero,one,i,j;
	long long int t;

	cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

	cin>>t;

	while(t--)
	{
        zero=one=0;

		cin>>str1>>str2;

		len=strlen(str1);

		for(i=0;i<len-1;i++)
		{
			if(str1[i]!=str1[i+1])
                goto lucky_looping;
		}

		cout<<"Unlucky Chef\n";
		goto end_of_loop;

        lucky_looping:
		for(i=0;i<len;i++)
		{
			if(str1[i]!=str2[i])
			{
				if(str1[i]=='1')
                    one++;
				else
                    zero++;
			}
		}

        cout<<"Lucky Chef\n";

		if(zero>=one)
            cout<<zero<<"\n";
        else
			cout<<one<<"\n";

        end_of_loop:;
	    }
	}
