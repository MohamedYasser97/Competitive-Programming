#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;

    cout<<ceil(sqrt(pow(x2-x1,2)+pow(y2-y1,2))/(2*r));

    return 0;
}
