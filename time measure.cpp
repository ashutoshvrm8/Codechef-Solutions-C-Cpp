/*  Ashutosh Verma - ashutoshvrm8@gmail.com
    finally :)
*/

#include<cmath>
#include<stdio.h>
#include<iostream>
using namespace std;

float change(float c)
{
    float m;
    m=c*-1;
    return m;
}

int main()
{
    int t,i,j;
    float angle,new_angle,time_1,time_2,x;
    float pareshaan=float(1)/120;

    cin>>t;

    while(t--)
    {
        cin>>angle;

        if(angle==180)
            cout<<"06:00\n";

        else if(angle==0)
            cout<<"00:00\n";

        else
        {
            new_angle=360-angle;

            for(i=0;i<=11;i++)
            {
                for(j=0;j<=59;j++)
                {
                    x=float((60*i - 11*j))/2;


                    if(x<0)
                        x=change(x);

                    time_1=x-angle;

                    if(time_1<0)
                        time_1=change(time_1);

                    time_2=x-new_angle;

                    if(time_2<0)
                        time_2=change(time_2);

                    if(time_1<pareshaan || time_2<pareshaan)
                        printf("%02d:%02d\n",i,j);
                }
            }
        }
    }

    return 0;
}
