/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

    #include<iostream>
    using namespace std;
    int main()
    {
    	long long int t,yr,d,i;

    	cin>>t;

    	while(t--)
    	{

    		cin>>yr;

    		d=0;

    		for(i=1900;i<yr;i++)
    		{
    			if(i%4)
    				d++;
    			else if(i%100)
    				d+=2;
    			else if(i%400)
    				d++;
    			else
    				d+=2;
    		}

    		d%=7;

    		switch(d)
    		{
    		case 0:
    		    cout<<"monday"<<"\n";
    			break;

    		case 1:
    		    cout<<"tuesday"<<"\n";
    			break;

    		case 2:
    		    cout<<"wednesday"<<"\n";
    			break;

    		case 3:
    		    cout<<"thursday"<<"\n";
    			break;

    		case 4:
    		    cout<<"friday"<<"\n";
    			break;

    		case 5:
    		    cout<<"saturday"<<"\n";
    			break;

    		case 6:
    		    cout<<"sunday"<<"\n";
    			break;
    		}

    	}
    }
