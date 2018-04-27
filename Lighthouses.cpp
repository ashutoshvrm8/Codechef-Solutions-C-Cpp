/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    Not sure, if this will work or not!
*/

#include<iostream>
using namespace std;

long long int MAX1=1000000000,MAX2=-1000000000;

int main()
{
    long long int t,n,i,x,y,b[4],min_x,max_x,min_y,max_y,temp1,temp2;

    cin>>t;

    while(t--)
    {
        for(i=0;i<4;i++)
            b[i]=0;

        temp1=temp2=x=y=0;

        max_x=MAX2;
        min_x=MAX1;
        max_y=MAX2;
        min_y=MAX1;

        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>x>>y;

            if(x<min_x)
            {
                min_x=x;
                temp1=i+1;
                b[0]=y;
            }

            if(x>max_x)
            {
                max_x=x;
                temp2=i+1;
                b[1]=y;
            }

            if(y<min_y)
            {
                min_y=y;
                b[2]=y;
            }

            if(y>max_y)
            {
                max_y=y;
                b[3]=y;
            }
        }

        if(b[0]==b[2])
            cout<<"1\n"<<temp1<<" NE\n";

        else if(b[0]==b[3])
            cout<<"1\n"<<temp1<<" SE\n";

        else if(b[1]==b[2])
            cout<<"1\n"<<temp2<<" NW\n";

        else if(b[1]==b[3])
            cout<<"1\n"<<temp2<<" SW\n";

        else
        {
            if(b[0]>b[1])
                cout<<"2\n"<<temp1<<" SE\n"<<temp2<<" NW\n";

            else
                cout<<"2\n"<<temp1<<" NE\n"<<temp2<<" SW\n";
        }
    }
    return 0;
}
