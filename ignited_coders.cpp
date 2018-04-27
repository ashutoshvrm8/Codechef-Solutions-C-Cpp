    #include <iostream>
    #include<cmath>
    using namespace std;

    int main()
    {
    	long long int t,n,h,x,i,l,s,num1,num2,ans;
    	cin >>t;

    	while(t--)
    	{
    		cin>>n>>h>>x>>i>>l>>s;

    		num2=(abs(x-h)+abs(h-i))*l;
    		num1=(abs(i-h))*s;

    		if(num1<num2)
                cout<<"STAIRS"<<"\n";
    		else if(num1>=num2)
                cout <<"LIFT"<<"\n";
    	}
    	return 0;
    }
