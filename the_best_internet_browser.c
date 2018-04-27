#include<stdio.h>
#include<string.h>

int main()
{
    char website[250],flag=1;
    int t,l,i,c,diff,k;
    scanf("%d", &t);

    for(k=0;k<=t;k++)
    {

        c=4;
        gets(website);
        l=strlen(website);


        for(i=4;i<l-4;i++)
        {
            if(website[i]=='a' || website[i]=='e' || website[i]=='i' || website[i]=='o' || website[i]=='u')
            c++;
        }

        if(flag==1)
        {
            flag++;
            continue;
        }

        else
        {
            diff=l-c;
            printf("%d/%d\n",diff,l);
        }
    }
    return 0;
}
