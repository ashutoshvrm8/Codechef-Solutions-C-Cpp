#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int t,left,right,sum,i,k,length,j;
    char arr[7],rev_arr[10];
    cin>>t;

    while(t--)
    {
        scanf("%d%d",&left,&right);
        sum=0;

        for(i=left;i<right+1;i++)
        {
            k=length=0;


            sprintf(arr,"%d",i);
            length=strlen(arr);

            for(j=length-1;j>=0;j--)
            {
                rev_arr[k]=arr[j];
                k++;
            }

            rev_arr[length]='\0';

            if(strcmp(arr,rev_arr)==0)
                    sum+=i;
        }
        cout<<sum<<"\n";
    }
}
