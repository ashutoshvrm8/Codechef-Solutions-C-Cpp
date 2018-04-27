#include<stdio.h>
#include<string.h>

int main()
{
    char str[150],g;
    int t,l,i,k,j,flag=1,flag2=0;
    scanf("%d", &t);

    for(k=0;k<=t;k++)
    {
        flag2=0;
        gets(str);
        l=strlen(str);

        if(l<26)
            flag2=1;
        else
        {
            for(i=0;i<l-1;i++)
            {
                for(j=1;j<l;j++)
                {
                    if(str[i]==str[j])
                    {
                        str[i]=str[i+1];
                        l--;
                        j--;
                    }
                }
            }
        }

        puts(str);

        if(l==26)
            flag2=0;

        if(flag==1)
        {
            flag++;
            continue;
        }

        else
        {
            if(flag2==1)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
    return 0;
}
