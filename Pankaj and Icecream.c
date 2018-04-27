#include<stdio.h>
#define pi 3.1415926535

int main()
{
    int t;
    double r1,h1,r2,h2,a1,a2;

    r1=h1=r2=h2=0.0f;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%lf%lf%lf%lf",&r1,&h1,&r2,&h2);

        a1=((pi*r1*r1*h1)/3)+((2*pi*r1*r1*r1)/3);
        a2=pi*r2*r2*h2;

        printf("%.9f %.9f\n",a1,a2);
    }

    return 0;
}
