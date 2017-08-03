#include <iostream>
using namespace std;

int main()
{
    int k,d;
    cin>>k>>d;

    if(k>1 && d==0)
        cout<<"No solution";
    else{

        for(int i=0;i<k;i++)
            if(i==0)
                cout<<d;
            else
                cout<<0;
    }

    return 0;

}
