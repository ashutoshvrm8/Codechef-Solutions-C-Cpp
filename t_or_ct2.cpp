    #include <iostream>
    #include <cstdio>
    using namespace std;

    int main()
    {
    	int t=0,i=0,k=0,d=0;
    	scanf("%d",&t);
    	int n=0;
    	while(t--)
    	{
    		char arr[100000];
    		int a[200]={0};
    		gets(arr);
    		if(n!=0)
    		{
                while(arr[i]!='\0')
                {
                    a[arr[i]]++;
                    i++;
                }
                for(k=0;k<200;k++)
                {
                    if(a[k]!=0)
                    d++;
                }

                if(d%2==0)
                printf("Terrorist\n");
                else
                printf("Counter Terrorist\n");
                i=0;
                d=0;

    		}
    		n++;
    	}
    	return 0;
    }
