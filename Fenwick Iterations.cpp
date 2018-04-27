/*

Ashutosh Verma
ashutoshvrm8@gmail.com
\m/

*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

#define ln length()

int find_max(int x,int y,int z)
{
    int max=x;

	if(y>max)
        max=y;

	if(z>max)
        max=z;

	return max;
}

int dope(string &str, int &fin) // alias bitch!!
{
    int i;

    //for(i=0;i<str.ln;i++)
    for(i=str.ln-1;i>=0;i--)
    {
        if(str[i]=='1')
            fin++;

        else
            return 0;
    }
    return 1;
}

int main()
{
    int t,i,max_len,ok,fin,temp,result;

    cin>>t;

    while(t--)
    {
        long long int n,count_one_str1,count_one_str2,count_one_str3;

        string str1,str2,str3;

        cin>>str1>>str2>>str3>>n;

        max_len=ok=fin=result=count_one_str1=count_one_str2=count_one_str3=0;

        max_len=find_max(str1.ln,str2.ln,str3.ln);

        for(i=0;i<str1.ln;i++)
            if(str1[i]=='1')
                count_one_str1++;

        for(i=0;i<str2.ln;i++)
            if(str2[i]=='1')
                count_one_str2++;

        for(i=0;i<str3.ln;i++)
            if(str3[i]=='1')
                count_one_str3++;

        ok=dope(str3,fin);

        if(ok!=0)
        {
            temp=0;

            ok=dope(str2,temp);

            if(temp!=str2.ln)
                fin=fin+temp;

            if(temp==str2.ln)
                fin=fin+n*str2.ln;
        }

        if(ok!=0)
            dope(str1,fin);

        result=(count_one_str2*n)+count_one_str1+count_one_str3-fin;
        result=result+1;

        printf("%d\n",result);
    }
    return 0;
}
