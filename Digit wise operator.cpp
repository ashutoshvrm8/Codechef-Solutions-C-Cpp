/*  Ashutosh Verma-ashutoshvrm8@gmail.com
*/

#include<iostream>
using namespace std;


void change(long long int num)
{

    while(num>9)
        num%=10;

    switch(num)
    {

        case 0:
        cout<<"zero ";
        break;

        case 1:
        cout<<"one ";
        break;

        case 2:
        cout<<"two ";
        break;

        case 3:
        cout<<"three ";
        break;

        case 4:
        cout<<"four ";
        break;

        case 5:
        cout<<"five ";
        break;

        case 6:
        cout<<"six ";
        break;

        case 7:
        cout<<"seven ";
        break;

        case 8:
        cout<<"eight ";
        break;

        case 9:
        cout<<"nine ";
        break;
    }
}

int main()
{
    long long int t,a,b,i,j,res,digit,p[10000],q[10000];
    char ch;

    cin>>t;

    while(t--)
    {
            cin>>a>>b>>ch;

            i=j=0;

            while(a!=0)
            {
                p[i]=a%10;
                i++;
                a/=10;
            }

            while(b!=0)
            {
                q[j]=b%10;
                j++;
                b/=10;
            }


            if(ch=='+')
            {
                for(i=j-1;i>=0;i--)
                {
                    res=p[i]+q[i];
                    digit=res%10;
                    change(digit);
                }
            }

            else if(ch=='*')
            {
                 for(i=j-1;i>=0;i--)
                {
                    res=p[i]*q[i];
                    digit=res%10;
                    change(digit);
                }
            }

            cout<<"\n";
    }
    return 0;
}
