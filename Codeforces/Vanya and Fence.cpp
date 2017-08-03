#include <iostream>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(auto c : a)
        if(c>h)
            n++;

    cout<<n;

    return 0;
}
