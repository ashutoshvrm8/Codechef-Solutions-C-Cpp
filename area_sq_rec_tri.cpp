#include<iostream>
#include<stdlib.h>
using namespace std;

class ar1
{
    public:
        int area(int);
};

class ar2
{
    public:
        int area(int,int);
};

class ar3
{
    public:
        int area(float ,int,int);
};

int ar1::area(int a)
{
      cout<<"\nArea of square : "<<a*a;
}
 int ar2::area(int a,int b)
{
      cout<<"\nArea of rectangle : "<<a*b;
}
 int ar3::area(float t,int a,int b)
{
      cout<<"\nArea of triangle : "<<t*a*b;
}

int main()
{
     int ch;
     int a,b,r;
     ar1 ob1;
     ar2 ob2;
     ar3 ob3;
     cout<<"\n1.Area of Square\n2.Area of Rectangle\n3.Area of Triangle\n4.Exit\n";
     cout<<"\nEnter your Choice : ";
     cin>>ch;

     switch(ch)
     {
              case 1:
                cout<<"\nEnter the side of square : ";
                cin>>r;
                ob1.area(r);
                break;
              case 2:
                cout<<"\nEnter Sides of the Rectangle : ";
                cin>>a>>b;
                ob2.area(a,b);
                break;
              case 3:
                cout<<"\nEnter Sides of the Triangle : ";
                cin>>a>>b;
                ob3.area(0.5,a,b);
                break;
              case 4:
                exit(0);
     }
}
