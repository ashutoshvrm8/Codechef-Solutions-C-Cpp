/*  Ashutosh Verma - ashutoshvrm8@gmail.com
*/

#include<stdio.h>

int main()
{
    int n,i,arr[1000];
    float s1=0.0,s2=0.0,s3=0.0;

    scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);

            if(arr[i]>0)
                s1++;
            else if(arr[i]<0)
                s2++;
            else
                s3++;
        }

        printf("%.3f\n%.3f\n%.3f",s1/n,s2/n,s3/n);
    return 0;
}
