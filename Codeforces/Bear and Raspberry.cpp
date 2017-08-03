#include <iostream>

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int dif=a[0]-a[1];

    for(int i=1;i<n-1;i++)
        if(a[i]-a[i+1] > dif)
            dif=a[i]-a[i+1];

    if(dif-c >=0)
        cout<<dif-c;
    else
        cout<<0;

    return 0;
}
