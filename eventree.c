#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>
#define MAX 100

typedef struct graph
{
    int v;
    struct graph *e;
}graph;

int reached[101];
int arr[101];

int main()
{
    int N,M,ui,vi,i=1,l,c,children[101]={0},vrtx;
    graph *g[MAX],*next;

    scanf("%d%d",&N,&M);

    while(i<=N)
    {
        g[i]=(graph *)malloc(sizeof(graph));
        g[i]->v=i;
        g[i]->e=NULL;
        i++;
    }

    i=0;

    while(i<M)
    {
        scanf("%d%d",&ui,&vi);

        next=g[ui];

        while(next->e!=NULL)
            next=next->e;

        next->e = (graph *)malloc(sizeof(graph));
        next->e->v=vi;
        next->e->e=NULL;
        next=g[vi];

        while(next->e!=NULL)
            next=next->e;

        next->e=(graph *)malloc(sizeof(graph));
        next->e->v=ui;
        next->e->e=NULL;

        i++;
    }

    i=0;
    l=1;
    arr[0]=1;
    reached[0]=1;

    while(i<N)
    {
        next=g[arr[i]];
        reached[next->v] = 1;
        children[next->v] = 1;
        next=next->e;

        while(next!=NULL)
        {
            if(reached[next->v] == 0)
            {
                arr[l++]=next->v;
                children[next->v] =1;
            }
            next=next->e;
        }
        i++;
    }

    i=N-1;

    while(i>=0)
    {
        next=g[arr[i]];
        reached[next->v]=0;
        vrtx=next->v;
        next=next->e;

        l=0;

        while(next!=NULL)
        {
            if(reached[next->v] == 1)
            {
                children[next->v] += children[vrtx];
                l += 1;
            }
            next=next->e;
        }

        if(l==0)
            children[vrtx] -= 1;
        i--;
    }

    c=0;

    for(i=1;i<=N;i++)
    {
        if(children[i] % 2 == 0)
            c+=1;
    }

    printf("%d\n",c);

    return 0;
}
