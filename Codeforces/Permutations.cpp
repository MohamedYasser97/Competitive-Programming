#include <iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int a[n+1],b[n+1],c[200002];

    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=n;i++)
        cin>>b[i];

    for(int i=1;i<=n;i++)
        c[b[i]]=i;

    int i,x=-1;

    for(i=1;i<=n;i++){
        if(c[a[i]]<x)
            break;

        x=c[a[i]];
    }

    if(n-i+1<=0)
        cout<<0;
    else
    cout<<n-i+1;

    return 0;
}
