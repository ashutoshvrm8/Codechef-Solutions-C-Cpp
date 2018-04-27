#include<stdio.h>

int main()
{
    float a,r,term,sum=0;
    scanf("%f",&a);
    scanf("%f",&r);
    term=a;
    while(term>1e-7)
    {
        sum+=term;
        term=term*r;
    }
    printf("\n%.61f",sum);
    return 0;
}
