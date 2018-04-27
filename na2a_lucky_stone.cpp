#include<iostream>
using namespace std;

long long int count_zero(long long int n)
{
    long long int d=0,temp=0,count=0;
    temp=n;

    while(temp!=0)
    {
        d=temp%10;
        if(d==0)
            count++;
        else
            break;

        temp=temp/10;
    }

    return count;
}

int main()
{
    long long int n,i,arr[100000],j,k,t;
    long long int a[10],b[10];
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%5!=0 && arr[i]%10!=0)
            cout<<arr[i]<<"\n";

        if(arr[i]%5==0)
        {
            k=1;
            t=0;
            for(j=0;j<8;j++)
            {
                a[j]=arr[i]*k;
                k=k*4;
                b[j]=count_zero(a[j]);
                /*cout<<a[j]<<"\t"<<b[j]<<"\n";*/
            }
            for(j=0;j<8;j++)
            {
                if(b[j+1]>b[j])
                    t=j+1;
                if(b[j+1]<=b[j])
                    break;
            }
            cout<<a[t]<<"\n";
        }
    }

    return 0;
}
