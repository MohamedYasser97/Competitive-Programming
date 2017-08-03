#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,al=0,in=0,fo=0;
    cin>>n;

    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]=='A')
            al++;
        else
        if(a[i]=='I')
            in++;
        else
            fo++;
    }

    if(in==0)
        cout<<al;
    else
    if(in==1)
        cout<<1;
    else
        cout<<0;

    return 0;
}
