#include <iostream>

using namespace std;

int main()
{
    int n,x,totime=0,b=1;
    cin>>n>>x;

    int a[n][2];

    for(int i=0;i<n;i++)
        for(int j=0;j<2;j++)
            cin>>a[i][j];

    for(int i=0;i<n;i++)
    {
        while(a[i][0]>=x+b)
            b+=x;

        totime+=a[i][1]-b+1;
        b=a[i][1]+1;
    }

    cout<<totime;

    return 0;
}
