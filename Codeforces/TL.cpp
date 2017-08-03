#include <iostream>
using namespace std;

int main()
{
    int n,m,x,maxa=0,mina=100;
    cin>>n>>m;

    while(n--)
    {
        cin>>x;

        if(x>maxa)
            maxa=x;

        if(x<mina)
            mina=x;
    }

    while(m--)
    {
        cin>>x;

        if(x<=maxa || x<=mina*2)
        {
            cout<<-1;
            return 0;
        }
    }

    cout<<max(maxa,mina*2);

    return 0;

}
