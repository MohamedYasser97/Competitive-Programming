#include <iostream>
using namespace std;

int main()
{
    long long int n,m,time=0,loc=1;

    cin>>n>>m;

    for(long long int i=0;i<m;i++)
    {
        int in;
        cin>>in;

        if(in<loc)
        {
            time+=n-loc+1;
            loc=1;
        }

        time+=in-loc;
        loc=in;
    }

    cout<<time;

    return 0;
}
