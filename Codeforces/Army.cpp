#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n;

    int d[n-1]={0};

    for(int i=1;i<=n-1;i++)
        cin>>d[i];

    cin>>a>>b;

    int yrs=0;
    for(int i=a;i<b;i++)
        yrs+=d[i];

    cout<<yrs;

    return 0;
}
