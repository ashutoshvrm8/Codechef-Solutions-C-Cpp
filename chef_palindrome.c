#include<stdio.h>
#include<string.h>
int main()
{
	int i,t,a,b,min,m;
	char s[10000];
	scanf("%d",&t);
	while(t--)
	{
		int sum=0,flag=0;
		scanf("%s",s);
		scanf("%d%d",&a,&b);
		if(a>b)
			min=b;
		else
			min=a;
		m=strlen(s);
		for(i=0;i<m/2;i++)
		{
			if( s[i]=='a' && s[m-i-1]=='/' || s[i]=='/' && s[m-i-1]=='a')
				sum=sum +a;
			else if(s[i]=='b' && s[m-i-1]=='/' || s[i]=='/' && s[m-i-1]=='b')
				sum=sum+b;
			else if(s[i]=='/' && s[m-i-1]=='/')
				sum=sum+ min+min;
			else if(s[i]=='a' && s[m-i-1]=='b' || s[i]=='b' && s[m-i-1]=='a')
				flag=1;
		}
		if(flag==1)
		printf("-1\n");
		else
		printf("%d\n",sum);
	}
	return 0;
}
