#include<stdio.h>
#include<string.h>

int main()
{
    char word[250],flag=1;
    int t,l,i;
    scanf("%d", &t);

    while(t--)
    {

        fflush(stdin);
        gets(word);
        l=strlen(word);
        for(i=0;i<l-2;i++)
        {
            if(word[i]!=word[i+1])
                flag=1;
            else
                flag=0;
        }
        if(flag==1)
            printf("SLAP\n");
        else
            printf("KISS\n");
    }
    return 0;
}
