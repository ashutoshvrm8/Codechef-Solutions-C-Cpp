#include<iostream>
using namespace std;

class un
{
    public:
        int x,y,z;
        void get_info(int a,int b,int c);
        void display();
        void operator-();
};

void un::get_info(int a,int b,int c)
{
    x=a;
    y=b;
    x=c;
}

void un::display()
{
    cout<<x<<", ";
    cout<<y<<", ";
    cout<<z<<"\n";
}

void un::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}

int main()
{
    un obj;

    obj.get_info(-15,25,-35);
    cout<<"obj : ";

    obj.display();

    -obj;

    cout<<"obj : ";
    obj.display();

    return 0;
}
