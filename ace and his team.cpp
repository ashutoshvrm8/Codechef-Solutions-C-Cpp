#include<cstdio>
#include<cstring>

#define lld long long int

int a[2000005];

using namespace std;

int fast()
{
    char c=getchar();
    while(c<'0' && c>'9')
      c=getchar();
    int num=0;
    while(c>='0' && c<='9')
    {
        num=num*10 + c - 48;
        c=getchar();
    }
    return num;
}

lld max( lld a, lld b)
{
 if(a>b)
   return a;
   else
    return b;
}

int main()
{
    lld t,n;
    int arr[1000000];
    t=fast();
    while(t--)
    {
        lld maxim=0,num,res=0,cnt=0;
        n=fast();
        for(lld i=0; i<n; i++)
        {
            arr[i]=fast();
            maxim=max(maxim,arr[i]);
        }

       // printf("%lld\n\n",maxim);

        //Generating Count of Numbers and Duplicates

        for(lld i=0; i<=maxim; i++)
            a[i]=0;

        for(lld i=0; i<n; i++)
            a[arr[i]]++;

    //    for(lld i=0 ; i<=maxim+2 ;i++)
    //     printf("\n%lld   %d\n", i,a[i]);


        //Checking for GCD and Multiples
        for(lld i=maxim; i>1; i--)
        {
            cnt=0;
            for(lld j=i; j<=maxim; j+=i)
            {
           //     printf("%d    %lld\n",j , a[j]);
                cnt+=a[j];
            }
           //  printf("\n\n");
                if(cnt>1)
                {
                    res=i;
                    break;
                }
        }


        if(res)
         printf("%lld\n",res);
         else
          printf("1\n");
    }
    return 0;
}
