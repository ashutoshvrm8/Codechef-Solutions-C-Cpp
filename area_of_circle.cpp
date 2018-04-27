#include<iostream>
using namespace std;

int main()
{
    float area_of_circle(float);
    float radius,area;

    cout<<"\n\nEnter the radius of circle : ";
    cin>>radius;

    area=area_of_circle(radius);

    cout<<"\n\nThe area of circle is : "<<area<<"\n\n\n";

    return 0;
}

float area_of_circle(float radius)
{
    float temp;
    temp=radius*radius*22/7;
    return temp;
}
