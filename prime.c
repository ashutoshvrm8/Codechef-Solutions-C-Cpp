#include<stdio.h>

int main()
{
    FILE *fp;
    long long int n,j,i,t;

    scanf("%lld", &n);

    fp=fopen("prime_list.txt","w");
    fprintf(fp,"2,");

    for(j=3;j<n;j++)
    {
        for(i=3;i<j;i++)
        {
            if(j%i==0)
                break;
        }

        if(i==j)
        {
            if(j!=4)
                fprintf(fp,"%lld,",j);
        }
    }

    fclose(fp);

    return 0;
}
