#include<iostream>
using namespace std;

int main()
{
    int people[101],i,c=0,k=0;

    for(i=1;i<101;i++)
        people[i]=i;

    cout<<"people killed : \n\n";

    while(k!=99)
    {
        for(i=1;i<101;i++)
        {
            if(people[i]!=0)
                c++;

            if(c==2)
            {
                cout<<people[i]<<" ";
                people[i]=c=0;
                k++;
            }
        }
        cout<<"\n\n";
    }

    for(i=1;i<101;i++)
        if(people[i]!=0)
            cout<<"Zinda Aadmi : "<<people[i]<<"\n\n";

    return 0;
}
