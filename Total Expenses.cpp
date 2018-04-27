/*ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int test;
    float q,p;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%f%f",&q,&p);

        if(q<=1000)
            printf("%f\n",q*p);

        if(q>1000)
            printf("%f\n",(q*p)*0.9);
    }

    return 0;
}
