/*7.Write a program in which a class has three data members: name, roll no, marks of 5 subjects
and a member function Assign() to assign the streams on the basis of table given below:

Avg. Marks               Stream
90% or more         Computers
80% - 89%            Electronics
75% - 79%           Mechanical
70% - 74%            Electrical*/

#include<iostream>
#include<string>
using namespace std;

class cal
{
    public:
        string name,rollno,branch;
        int i,sum=0,marks[5];
        float avg;

        void get_info()
        {
            cout<<"\nEnter the name of student : ";
            cin>>name;

            cout<<"\nEnter roll number : ";
            cin>>rollno;
        }

        void assign()
        {
            cout<<"\nEnter the marks in 5 subjects : ";
            for(i=1;i<=5;i++)
            {
                cin>>marks[i];
                sum+=marks[i];
            }
            avg=sum/5;

            if(avg>=90)
                branch="Computers";
            else if(avg>=80 && avg<90)
                branch="Electronics";
            else if(avg>=75 && avg<80)
                branch="Mechanical";
            else if(avg>=70 && avg<75)
                branch="Electrical";
            else
                branch="No_Stream";
        }

        void display()
        {
            cout<<"\nStudent : "<<name;
            cout<<"\n\nRoll Number : "<<rollno;
            cout<<"\n\nStream : "<<branch<<"\n";
        }
};

int main()
{
    cal obj;

    obj.get_info();
    obj.assign();
    obj.display();

    return 0;
}
