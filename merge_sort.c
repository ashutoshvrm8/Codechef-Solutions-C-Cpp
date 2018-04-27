#include<stdio.h>
#include<time.h>

FILE *fpr=NULL,*fpw=NULL;

void msort(long long int a[],long long int temp[],long long int left,long long int right)
{
    long long int mid;

    if(right>left)
    {
        mid=(right+left)/2;

        msort(a,temp,left,mid);
        msort(a,temp,mid+1,right);
        merge(a,temp,left,mid+1,right);
    }
}

void merge(long long int a[],long long int temp[],long long int left,long long int mid,long long int right)
{
    long long int i,left_end,size,temp_pos;

    left_end=mid-1;
    temp_pos=left;
    size=right-left+1;

    while((left<=left_end) && (mid<=right))
    {
        if(a[left]<=a[mid])
        {
            temp[temp_pos]=a[left];
            temp_pos=temp_pos+1;
            left=left+1;
        }
        else
        {
            temp[temp_pos]=a[mid];
            temp_pos=temp_pos+1;
            mid=mid+1;
        }
    }
    while(left<=left_end)
    {
        temp[temp_pos]=a[left];
        left=left+1;
        temp_pos=temp_pos+1;
    }
    while(mid<=right)
    {
        temp[temp_pos]=a[mid];
        mid=mid+1;
        temp_pos=temp_pos+1;
    }
    for(i=0;i<size;i++)
    {
        a[right]=temp[right];
        right=right-1;
    }
}

int main()
{
    long long int i,n,arr[100],t[100];

    scanf("%lld",&n);

    for(i=0;i<n;i++)
        scanf("%lld",&arr[i]);

    msort(arr,t,0,n);

    printf("\n");

    for(i=0;i<n;i++)
        printf("%lld ",arr[i]);
}
