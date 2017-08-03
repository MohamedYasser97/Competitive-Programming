#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,res=0,i=0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i],res+=a[i];

    sort(a,a+n);

    while(!(res&1) && i<n){
        if(a[i]&1)
            res-=a[i];
        i++;
    }

    if(res&1)
        cout<<res;
    else
        cout<<0;

    return 0;
}
