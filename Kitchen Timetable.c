/*
the_wolverine
Ashutosh Verma - ashutoshvrm8@gmail.com
Submitting on behalf of team wishmegoodluck
*/

#include<stdio.h>

void gauravbhatt_is_studying()
{
    /*
    WTF and I'm coding....... :p
    */
}

int main()
{
    int t;

    long long int i,n,student_cook_count,prev;

    long long int quanta[10001]={0},burst[10001]={0};

    scanf("%d",&t);

    while(t--)
    {
        scanf("%lld",&n);

        student_cook_count=prev=0;

        for(i=0;i<n;i++)
            scanf("%lld",&quanta[i]);

        for(i=0;i<n;i++)
            scanf("%lld",&burst[i]);

        for(i=0;i<n;i++)
        {
            if(burst[i]<=(quanta[i]-prev))
                student_cook_count++;

         	prev=quanta[i];
        }

        printf("%lld\n",student_cook_count);

    }
    return 0;
}
