#include<iostream>
using namespace std;

void rev(char *st)
{
    if(*st)
    {
        rev(st+1);
        cout<<*st;
    }
}

int main()
{
    char a[] = "Ashutosh likes codechef";
    rev(a);
    return 0;
}
