/*Ashutosh Verma - ashutoshvrm8@gmai.com
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,k,length=0,temp;
    string a[10000],str1,str2,str3,str4,str5,str6;

    str4="done";
    str5="way";
    str6="ay";

    cin>>str1;

    while(str1.compare(str4)!=0)
    {
        length=temp=0;

        a[length]=str1;

        while(a[length][a[length].length()-1]!='.')
        {
            cin>>str1;
            a[++length]=str1;
        }

        for(i=0;i<length;i++)
        {
            k=0;

            while(k<a[i].length() && !(a[i][k]=='a'||a[i][k]=='A'||a[i][k]=='e'||a[i][k]=='E'||a[i][k]=='i'||a[i][k]=='I'||a[i][k]=='o'||a[i][k]=='O'||a[i][k]=='u'||a[i][k]=='U'||a[i][k]=='y'||a[i][k]=='Y'))
                k++;

            if(k==a[i].length())
            {
                str2=a[i].substr(0,k-1);

                if(i==0)
                {
                    temp=int(str2[i]);

                    if(temp>=65 && temp<=90)
                        str2[i]=str2[i]+32;
                }

                a[i]=a[i][k-1]+str2+str6;

                if(i==0)
                {
                    temp=int(a[i][0]);

                    if(temp>=97 && temp<=122)
                        a[i][0]=a[i][0]-32;
                }
            }

            else if(k==0)
                a[i]=a[i]+str5;

            else
            {
                if(i==0)
                {
                    str2=a[i].substr(0,k);
                    str2[0]=str2[0]+32;

                    str3=a[i].substr(k);

                    a[i]=str3+str2+str6;
                    a[i][0]=a[i][0]-32;
                }

                else
                {
                    str2=a[i].substr(0,k);
                    str3=a[i].substr(k);
                    a[i]=str3+str2+str6;
                }
            }
        }

        i=length;
        k=0;

        while(k<(a[i].length()-1) && !(a[i][k]=='a'||a[i][k]=='A'||a[i][k]=='e'||a[i][k]=='E'||a[i][k]=='i'||a[i][k]=='I'||a[i][k]=='o'||a[i][k]=='O'||a[i][k]=='u'||a[i][k]=='U'||a[i][k]=='y'||a[i][k]=='Y'))
            k++;



        if(k==int(a[i].length()-1))
        {
            str2=a[i].substr(0,k-1);
            a[i]=a[k-1]+str2+str6+'.';
        }

        else if(k==0)
            a[i]=a[i].substr(0,a[i].length()-1)+str5+'.';

        else
        {
            str2=a[i].substr(0,k);
            str3=a[i].substr(k,a[i].length()-k-1);
            a[i]=str3+str2+str6+'.';
        }

        i=length;

        for(i=0;i<=length;i++)
            cout<<a[i]<<' ';

        cout<<"\n";

        k=0;

        cin>>str1;
    }
    return 0;
}
