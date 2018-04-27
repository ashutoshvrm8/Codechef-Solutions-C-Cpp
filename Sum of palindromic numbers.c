/*  Ashutosh Verma-ashutoshvrm8@gmail.com
    :p
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int t,left,right,sum,i,flag,size;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%d%d",&left,&right);

		sum=0;

		while(left<=right)
		{
            char arr[6];
            sprintf(arr,"%d",left);

            flag=0;
            size=strlen(arr);

            for(i=0;i<size/2;i++)
            {
                if(arr[i]!=arr[size-1-i])
                {
                    flag=1;
                    break;
                }
            }

            if(flag==0)
                sum=sum+left;

            left++;
		}
		printf("%d\n",sum);
	}

	return 0;
}
