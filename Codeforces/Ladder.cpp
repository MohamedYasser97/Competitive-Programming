#include <bits/stdc++.h>//3 5 2 1..dpright hat2ool law feeh 7ad hayzeed ba3d el 3 w dpleft law 7ad hay2ell abl el 1
using namespace std;
int dpright[100002],dpleft[100002],a[100002];

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
        cin>>a[i];

    dpleft[1]=1;
    for(int i=2;i<=100002;i++)
        if(a[i]<=a[i-1])
            dpleft[i]=dpleft[i-1];
        else
            dpleft[i]=i;

    dpright[100002]=100002;
    for(int i=100001;i>=1;i--)
        if(a[i]<=a[i+1])
            dpright[i]=dpright[i+1];
        else
            dpright[i]=i;

    int l,r;
    while(m--){
        cin>>l>>r;
        if(dpright[l]>=dpleft[r])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
