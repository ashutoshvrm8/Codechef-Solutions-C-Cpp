#include<iostream>
using namespace std;

class base
{
    public:
        int a;
        void get_num()
        {
            cout<<"\n\nEnter Number : ";
            cin>>a;
        }

};

class derived1:public base
{
    public:
        void square()
        {
            get_num();
            cout<<"\nSquare : "<<a*a;
        }
};

class derived2:public base
{
    public:
        void cube()
        {
            get_num();
            cout<<"\nCube : "<<a*a*a;
        }
};

int main()
{
    derived1 obj1;
    obj1.square();

    derived2 obj2;
    obj2.cube();

    return 0;
}
