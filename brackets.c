#include<stdio.h>
#include<string.h>

int main()
{
    int t,l,a=0,b=0,i;
    char s[1000000];
    scanf("%d", &t);
    while(t--)
    {
        fflush(stdin);
        gets(s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='(')
                a++;
            else
                a--;
            if(a>b)
                b=a;
      }
      for(i=0;i<b;i++)
        printf("(");
      for(i=0;i<b;i++)
        printf(")");
 }
    return 0;
}
