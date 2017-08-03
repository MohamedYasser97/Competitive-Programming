#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string x,y,z;
    int xn=1,yn=0;

    cin>>x;

    for(int i=0;i<n-1;i++)
    {
        cin>>y;

        if(y==x)
            xn++;
        else
        {
            yn++;
            z=y;
        }
    }

    if(xn>yn)
        cout<<x;
    else
        cout<<z;

    return 0;
}
