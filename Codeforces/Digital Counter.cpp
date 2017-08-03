#include <iostream>
using namespace std;

int main()
{
    string n;

    cin>>n;

    int a=n[0]-'0' , b=n[1]-'0';

    switch(a){

        case 0: a=2;break;
        case 1: a=7;break;
        case 2: a=2;break;
        case 3: a=3;break;
        case 4: a=3;break;
        case 5: a=4;break;
        case 6: a=2;break;
        case 7: a=5;break;
        case 8: a=1;break;
        case 9: a=2;break;
    }

    switch(b){

        case 0: b=2;break;
        case 1: b=7;break;
        case 2: b=2;break;
        case 3: b=3;break;
        case 4: b=3;break;
        case 5: b=4;break;
        case 6: b=2;break;
        case 7: b=5;break;
        case 8: b=1;break;
        case 9: b=2;break;
    }

    cout<<a*b;
    return 0;
}
