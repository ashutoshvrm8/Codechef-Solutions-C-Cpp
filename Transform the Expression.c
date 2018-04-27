#include<stdio.h>
#include<string.h>

int main()
{
    int i,j=0,t,k=0;
    char tr[1000],str[1000];
    scanf("%d", &t);
    while(k<=t)
    {
        fflush(stdin);
        gets(str);
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>=97 && str[i]<123)
            {
                printf("%c",str[i]);
            }
            else if(((str[i]>=33 && str[i]<=47 )|| (str[i]>=91&&str[i]<=96))&&( str[i]!=')' && str[i]!='(') )
            {
                tr[j]=str[i];
                j++;
            }
            if(str[i]==')')
            {
                j--;
                printf("%c",tr[j]);
            }
        }
        printf("\n");
        k++;
    }
return 0;
}
