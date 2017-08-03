#include <iostream>
using namespace std;

int main()
{
    int mv;
    char a[2];
    cin>>a[0]>>a[1];

    if(a[0]>='b' && a[0]<='g'){

        if(a[1]>='2' && a[1]<='7')
            mv=8;
        else
            mv=5;
    }else{

        if(a[1]>='2' && a[1]<='7')
            mv=5;
        else
            mv=3;
    }

    cout<<mv;

    return 0;
}
