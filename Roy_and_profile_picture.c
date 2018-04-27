#include<stdio.h>

int main()
{
    int L,N,W,H;
    scanf("%d", &L);
    scanf("%d", &N);
    while(N--)
    {
        W=H=0;

        scanf("%d", &W);
        scanf("%d", &H);

        if(W<L || H<L)
        printf("UPLOAD ANOTHER\n");

        if(W>=L || H>=L)
        {
            if((W==H)&&(H==L))
            printf("ACCEPTED\n");

            if(W>L && H>L)
            printf("CROP IT\n");
        }
    }
    return 0;
}
