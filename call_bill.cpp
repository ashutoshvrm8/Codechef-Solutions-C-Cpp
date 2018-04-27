#include<iostream>
using namespace std;

float cal(int calls)
{
    float cost;
    if(calls<=100)
        cost=200;
    else if(calls>100 && calls<=150)
        cost=200+((calls-100)*0.60);
    else if(calls>150 && calls<=200)
        cost=200+30+((calls-150)*0.50);
    else
        cost=200+30+25+((calls-200)*0.40);
    return cost;
}

int main()
{
    int calls;
    float bill;
    cout<<"\nPlease, enter the number of calls : ";
    cin>>calls;
    bill=cal(calls);
    cout<<"\nDear customer, the cost of your bill is Rupees : "<<bill<<"\n";
    return 0;
}
