#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,res=0,maxodd=-1e9,minodd=1e9;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i]>0){
            res+=a[i];
            if(a[i]&1)
                minodd=min(minodd,a[i]);
        }else if(a[i]&1)
            maxodd=max(maxodd,a[i]);
    }

    if(!(res&1))
        res-=min(minodd,-maxodd);

    cout<<res;

    return 0;
}
