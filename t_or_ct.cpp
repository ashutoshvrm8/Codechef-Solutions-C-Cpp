#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int t,count;

    scanf("%d",&t);

    while(t--)
    {
        count=0;

        char s[100001];
        scanf("%s",s);

        int arr[26];

        for(int i=0;i<26;i++)
            arr[i]=0;


        for(int i=0;i<strlen(s);i++)
            arr[s[i]-'a']++;

        for(int i=0;i<26;i++)
            if(arr[i])
                count++;

        if(count%2)
            printf("Counter Terrorist\n");
        else
            printf("Terrorist\n");
    }

    return 0;
}
