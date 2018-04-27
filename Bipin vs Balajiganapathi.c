#include<stdio.h>

int main()
{
    int t,m,n;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&n,&m);

        if(n<m)
            printf("Balaji %d\n",m-n);
        else if(n>m)
            printf("Bipin %d\n",n-m);
        else
            printf("No Winner\n");
    }
}
