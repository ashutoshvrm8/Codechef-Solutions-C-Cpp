#include <stdio.h>

int main(void)
{
	int t;
    float i,o,r,s,result,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f%f%f",&o,&r,&s);
        temp=o*r;
        temp=temp+s;
        result=temp/(o+1);
        printf("%.2f\n",result);
    }
	return 0;
}
