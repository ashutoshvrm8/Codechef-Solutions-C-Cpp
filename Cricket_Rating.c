#include <stdio.h>

int main()
{
    int s=0,m=0,i,n,f,a[100000];

    scanf("%d",&n);

    f=0;

    for(i=0;i<n;i++)
    {
    	scanf("%d ",&a[i]);

    	if(a[i]>0)
    	{
    		f=1;
    	}
    }

    if(f==0)
    printf("0\n");

    else
    {

   for(i = 0; i < n; i++)
   {
     m = m + a[i];
     if(m < 0)
         m = 0;

     else if (s < m)
         s = m;

    }

    printf("%d\n",s);

    }



    return 0;
}
