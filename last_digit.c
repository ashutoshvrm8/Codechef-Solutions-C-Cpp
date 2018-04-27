#include<stdio.h>

int main()
{
    long long int i,k,j,carry,a,b,arr[1000],len;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        k=0;
        carry=0;
        scanf("%lld",&a);
        scanf("%lld",&b);
        arr[0]=a;
        for(i=1;i<=b;i++)
        {
            for(j=0;j<=k;j++)
             {
                arr[j]=arr[j]*a+carry;
                carry=arr[j]/10;
                arr[j]=arr[j]%10;
             }
             while(carry)
             {
                 k++;
                 arr[k]=carry%10;
                 carry/=10;
             }
         }
    }
    printf("%lld",arr[2]);
    return 0;
}
