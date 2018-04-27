#include <stdio.h>
#include <math.h>

int bin_to_gray(int);

int main()
{
    int bin,gray,t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &bin);
        gray = bin_to_gray(bin);
        printf("%d\n", gray);
    }
    return 0;
}

int bin_to_gray(int bin)
{
    int a, b, result = 0, i = 0;
    while (bin != 0)
    {
        a = bin % 10;
        bin = bin / 10;
        b = bin % 10;
        if ((a && !b) || (!a && b))
        {
            result = result + pow(10, i);
        }
        i++;
    }
    return result;
}
