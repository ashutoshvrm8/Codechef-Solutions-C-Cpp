#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,k,p;
    int i,j,temp,count_one,l,max_count,z,lm_f_bit,m;

    temp=0;

    cin>>n>>k>>p;

    int bin[n];
    char req[p];

    for(i=0;i<n;i++)
        cin>>bin[i];

    cin>>req;

    for(i=0;i<p;i++)
    {
        if(req[i]=='?')
        {
            count_one=max_count=z=0;

            for(l=0;l<k;l++)
            {
                if(bin[l]==1)
                    count_one++;
            }

            lm_f_bit=bin[z++];

            max_count=count_one;

            for(m=l;m<n;m++)
            {
                if(bin[m]==1 && lm_f_bit==0)
                    count_one++;

                if(bin[m]==0 && lm_f_bit==1)
                    count_one--;

                lm_f_bit=bin[z++];

                if(count_one>max_count)
                    max_count=count_one;

                if(max_count==k)
                    break;
            }

            cout<<max_count<<"\n";
        }
        else
        {
            temp=bin[n-1];

            for(j=n-1;j>0;j--)
                    bin[j]=bin[j-1];

            bin[0]=temp;
        }
    }

    return 0;
}
