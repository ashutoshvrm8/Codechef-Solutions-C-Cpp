#include <stdio.h>

int main()
{
    int i = 0;
    while(((scanf("%d\n", &i))%2!=0) && i != -1)
    {
        if(i%2==0)
        printf("%d\n", i);
    }
    return 0;
}
