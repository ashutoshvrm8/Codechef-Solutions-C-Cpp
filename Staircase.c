/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<stdio.h>

int main()
{
    int i,j,p,q;
    char ch='#';

    scanf("%d",&p);

    for(i=1;i<=p+2;i++)
    {
        for(q=p;q>=1;q--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
        }
      printf("\n");
      p--;
   }
   return 0;
}
