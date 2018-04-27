#include<stdio.h>

int main()
{
	int t,i,j,flag;
	char str1[20],str2[20];

	scanf("%d",&t);

	while(t--)
	{
        scanf("%s%s",&str1,&str2);
		for(j=0;j<=5;j++)
		{
			flag=0;
			for(i=0;i<5;i++)
			{
				if(str2[i]!=str1[i+j])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("1\n");
				break;
			}
		}
		if(flag==1)
		printf("0\n");
	}
}
