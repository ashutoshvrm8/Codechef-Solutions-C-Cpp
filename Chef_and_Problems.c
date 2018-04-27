#include<stdio.h>

int main()
{
    long int n,m,k,i,j,l,r,pos1,pos2,count;
    long int arr[100000];
    scanf("%ld%ld%ld",&n,&m,&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=m)
            scanf("%ld", &arr[i]);
    }
    while(k--)
    {
        l=r=pos1=pos2=0;
        count=1;
        scanf("%ld%ld",&l,&r);
        for(i=l-1;i<r;i++)
        {
            pos1=i;
            j=l;
            while(j<r)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    pos2=j;
                    j++;
                }
                else
                    j++;
            }
        }
            if(count>1)
                printf("%ld\n", pos2-pos1);
            else
                printf("0\n");
    }
    return 0;
}
