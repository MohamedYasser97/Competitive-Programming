#include <iostream>
#include <cmath>

using namespace std;


int rook(int x1,int y1,int x2,int y2)
{
    if(x1==x2 || y1==y2)
        return 1;
    else
        return 2;
}


int bishop(int x1,int y1,int x2,int y2)
{
    if((x1+y1)%2 != (x2+y2)%2)
        return 0;
    else
    if(abs(x2-x1)==abs(y2-y1))
        return 1;
    else
        return 2;
}


int king(int x1,int y1,int x2,int y2)
{
        return max(abs(y1-y2),abs(x1-x2));
}


int main()
{
    int x1,y1,x2,y2;

    cin>>x1>>y1>>x2>>y2;

    cout<<rook(x1,y1,x2,y2)<<' '<<bishop(x1,y1,x2,y2)<<' '<<king(x1,y1,x2,y2);

    return 0;
}
