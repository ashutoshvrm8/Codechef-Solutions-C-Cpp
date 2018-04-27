#include <stdio.h>
#include<string.h>

int main()
{
	int t,n,i,flag=0;
	char a[1000];
	scanf("%d",&t);
	while(t--)
	{
		flag=0;
		scanf("%d",&n);
		scanf("%s",a);
		i=0;
		while(a[i]!='\0')
		{
			if(a[i]=='I')
			{
				flag=1;
				printf("INDIAN");
				break;
			}
			else if(a[i]=='Y')
			{
				flag=1;
				printf("NOT INDIAN");
				break;
			}
			i++;
		}
	 if(flag==0)
	 printf("NOT SURE");
	 if(t>=1)
	 printf("\n");
	}
	return 0;
}
