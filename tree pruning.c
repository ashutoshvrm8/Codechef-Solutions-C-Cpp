#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 100000

long long int k[MAX][200];
int visited[MAX];

int main()
{
    long long int N,K,u,w[MAX],v,sum,j,i=1;

    scanf("%lld%lld",&N,&K);

    while(i<=N)
    {
        scanf("%lld",&w[i]);
        i++;
    }

    i=sum=0;

    while(i<N)
    {
        if(i!=0)
        {
            scanf("%lld%lld",&u,&v);
            sum=w[u]+w[v];
            visited[u] =1;
            visited[v] =1;
        }

        for(j=0;j<=K;j++)
        {
            if(i==0||j==0)
                k[i][j] = 0;
            else
            {
                if((sum+k[i-1][j]) > k[i-1][j])
                    k[i][j]=sum+k[i-1][j];
                else
                    k[i][j]=k[i-1][j];
            }
        }
        i++;
    }
printf("%lld\n",k[N-1][K]);
    return 0;
}
