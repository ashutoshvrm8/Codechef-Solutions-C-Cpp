/*	OOPS with C++
	Assignment - 1

	Ashutosh Verma
	CS - 4A
	Roll no. 39	*/

#include<iostream>
using namespace std;

class ops
{
    int a,b;
    public:
        void set_val(int x,int y)
        {
            a=x;
            b=y;
        }
        void print_val()
        {
            cout<<"value of a : "<<a;
            cout<<"value of b : "<<b;
        }
        friend ops operator +(ops,ops);
        friend ops operator -(ops,ops);
        friend ops operator *(ops,ops);
        friend ops operator /(ops,ops);
};

ops operator +(ops s1,ops s2)
{
    ops temp;
    temp.a=s1.a+s2.a;
    temp.b=s1.a+s2.b;
    return temp;
}

ops operator -(ops s1,ops s2)
{
    ops temp;
    temp.a=s1.a-s2.a;
    temp.b=s1.a-s2.b;
    return temp;
}

ops operator *(ops s1,ops s2)
{
    ops temp;
    temp.a=s1.a*s2.a;
    temp.b=s1.a*s2.b;
    return temp;
}

ops operator /(ops s1,ops s2)
{
    ops temp;
    temp.a=s1.a/s2.a;
    temp.b=s1.a/s2.b;
    return temp;
}

int main()
{
    int choice;
    ops o1,o2,o3;

    o1.set_val(15,10);
    o2.set_val(8,3);

    cout<<"\nEnter your choice from the menu\n";
    cout<<"\n**  **  **  MENU  **  **  **\n\n";
    cout<<"1> Addition\n";
    cout<<"2> Subtraction\n";
    cout<<"3> Multiplication\n";
    cout<<"4> Division\n";
    cout<<"\n\nEnter your choice here : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        o3=operator +(o1,o2);
        o3.print_val();
        break;

        case 2:
        o3=operator -(o1,o2);
        o3.print_val();
        break;

        case 3:
        o3=operator *(o1,o2);
        o3.print_val();
        break;

        case 4:
        o3=operator /(o1,o2);
        o3.print_val();
        break;

        default:
        cout<<"\nInvalid Choice";
    }

    return 0;
}
