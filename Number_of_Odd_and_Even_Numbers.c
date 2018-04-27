#include<stdio.h>

int main()
{
int n,t,even=0,odd=0;

scanf("%d", &t);

while(t--)
{
	scanf("%d", &n);

	if(n%2==0)
		even++;
	else
		odd++;
}

if(odd>even)
	printf("%d",odd-even);
else
	printf("%d",even-odd);

return 0;
}
