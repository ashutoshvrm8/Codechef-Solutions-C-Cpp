#include<stdio.h>

int main()
{
    int i,a[100],m,c=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d\n",a[i]);
        if(a[i]%3==0)
        c++;
    }
    printf("%d",c);
    return 0;
}
