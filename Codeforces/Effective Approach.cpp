#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;

    int idx[n+1];
    for(int i=1;i<=n;i++){
        cin>>a;
        idx[a]=i;
    }

    int q,temp;
    long long int res1=0,res2=0;
    cin>>q;

    while(q--){
        cin>>temp;
        res1+=idx[temp];
        res2+=n-idx[temp]+1;
    }

    cout<<res1<<' '<<res2;

    return 0;
}
