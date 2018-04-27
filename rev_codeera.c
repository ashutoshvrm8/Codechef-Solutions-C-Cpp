#include <stdio.h>

int main()
{
    int rev,t;
	char arr[10100];
	scanf("%d\n",&t);
	while(t--)
	{
	gets(arr);
	rev=arr[0]-'0';
	if(rev%2==0)
	{
	    printf("EVEN\n");
	}
	else
	{
	    printf("ODD\n");
	}
	}
	return 0;
}
