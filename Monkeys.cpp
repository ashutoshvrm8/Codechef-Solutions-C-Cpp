#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int traveltime(int input1[],int input2)
{
	int sum=0,i,max=0,smax=0,arr[30],n=0,p1=0,p2=0,z=0,y1=0,y2=0;
	n=input2;

	for(i=0;i<n;i++)
		arr[i]=input1[i];

	std::sort(input1,input1+input2);

    z+=input1[n-1]+input1[n-2];

	max=input1[n-1];
	smax=input1[n-2];

	//cout<<smax<<"   "<<max;

	for(i=0;i<n;i++)
	{
		if(arr[i]==smax)
			p1=i;

		if(arr[i]==max)
			p2=i;
	}

	y1=p2-p1;
	y2=p1+p2;

	//cout<<y1<<"   "<<y2<<"   "<<z;

	if(p1<p2)
		sum=z+y1;
	else
		sum=z+(n-y2);

	return sum;
}


int main()
{
    int a[30],n,i,q;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    q=traveltime(a,n);

    cout<<q;

    return 0;
}
