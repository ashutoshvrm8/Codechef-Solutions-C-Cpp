/*  Ashutosh Verma - ashutoshvrm8@gsmil.com
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t,i,j,flag;
    char s[10000];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",&s);

        i=flag=0;
        j=strlen(s)-1;

        while(i<=j)
        {
            if(abs(s[i]-s[i+1]) != abs(s[j]-s[j-1]))
            {
                flag=1;
                break;
            }
            i+=2;
            j-=2;
        }

        if(flag==0)
            printf("Funny\n");
        else
            printf("Not Funny\n");
    }

    return 0;
}
