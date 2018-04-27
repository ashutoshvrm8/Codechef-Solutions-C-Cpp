#include<stdio.h>

int main()
{
    int t;long int n;int i;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld\n",&n);
        printf("%ld\n",n/2 + 1);
    }
    return 0;
}
