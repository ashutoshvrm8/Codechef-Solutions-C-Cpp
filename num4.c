#include<stdio.h>

int main()
{
    long long int test=0,num=0,count=0,digit=0;
    scanf("%lld", &test);
    while(test--)
    {
        num=0;
        count=0;
        scanf("%lld", &num);
        if(num<=9)
        {
            if(num==4)
            {
                printf("1");
                printf("\n");
            }
             else
            {
                printf("0");
                printf("\n");
            }
        }
        else if(num>=10 && num<=1000000000)
        {
            while(num!=0)
            {
                digit=num%10;
                if(digit==4)
                count++;
                num=num/10;
            }
            printf("%lld",count);
        }
    }
    return 0;
}


