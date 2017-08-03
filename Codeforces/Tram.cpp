#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    pair<int,int>a[n];

    for(int i=0;i<n;i++)
        cin>>a[i].first>>a[i].second;

    int curcap=a[0].second-a[0].first , maxcap=curcap;
    for(int i=1;i<n;i++)
    {
        curcap-=a[i].first;
        curcap+=a[i].second;

        if(curcap>maxcap)
            maxcap=curcap;
    }

    cout<<maxcap;

    return 0;
}
