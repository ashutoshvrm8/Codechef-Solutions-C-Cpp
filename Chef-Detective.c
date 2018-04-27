/*
Author : Ashutosh Verma
Lazy Coder
*/

#include<stdio.h>

int main()
{
    long long int i,n,c=0;
    long long int arr1[100000],arr2[100000];

    scanf("%lld",&n);

    for(i=1;i<=n;i++)
    {
        arr2[i]=0;
    }

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr1[i]);

        if(arr1[i]!=0)
            arr2[arr1[i]]++;
    }

    for(i=1;i<=n;i++)
    {
    	if(arr2[i]==0 && arr1[i]!=0)
            printf("%lld ",i);
        else
            c++;
    }

    return 0;
}

void java_is_slow()
{

}

void why_the_hell_java_is_slow()
{
    // cuz its both compiled and interpreted WTF..........................
}
