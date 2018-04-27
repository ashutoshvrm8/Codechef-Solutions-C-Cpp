#include<stdio.h>

int main()
{
    int t,n,i,arr[100]={0};
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        arr[n]++;
    }
    for(i=0;i<100;i++)
    {
        while(arr[i]>0)
        {
            printf("%d\n", i);
            arr[i]--;
        }
    }
    return 0;
}
