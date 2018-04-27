#include<iostream>
using namespace std;

class area
{
    public:
        void area_of_circle(float radius)
        {
            float temp;
            temp=radius*radius*22/7;
            cout<<"\n\nThe area of circle is : "<<temp;
            cout<<"\n\n";
        }
};

int main()
{
    area obj;

    float radius;

    cout<<"\n\nEnter the radius of circle : ";
    cin>>radius;

    obj.area_of_circle(radius);

    return 0;
}
