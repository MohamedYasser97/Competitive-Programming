#include <bits/stdc++.h>//check 1)if reachable 2)if both coordinates will be reached at same time
using namespace std;

int main()
{
    int x1,y1,x2,y2,potx,poty;
    cin>>x1>>y1>>x2>>y2>>potx>>poty;
    if(abs(x1-x2)%potx==0&&abs(y1-y2)%poty==0&&(abs(x1-x2)/potx)%2==(abs(y1-y2)/poty)%2)
        cout<<"YES"; else cout<<"NO";
    return 0;
}
