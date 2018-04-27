#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    char a[1005];
    int l,i,c=0,flag=0;

    gets(a);

    l=strlen(a);

    for(i=0;i<l;i++)
    {
        if(!(a[i]>=65 && a[i]<=90))
            a[i]='.';
    }
    for(i=0;i<l;i++)
    {
        if(a[i-1]=='.' && a[i+1]=='.')
            a[i]='.';
        if(i==0 && a[i+1]=='.')
            a[i]='.';
    }

    a[l]='.';
    a[l+1]='\0';
    l++;

    for(i=2;i<l;i++)
    {
        if(a[i]=='.' && a[i-1]!='.')
            c++;
    }

    cout<<c;

    return 0;
}
