#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];

    if(m==0){
        cout<<"YES";
        return 0;
    }

    for(int i=0;i<m;i++)
        cin>>a[i];

    sort(a,a+m);

    if(a[0]==1 || a[m-1]==n){
        cout<<"NO";
        return 0;
    }

    if(m==1 || m==2){
        cout<<"YES";
        return 0;
    }

    for(int i=2;i<m;i++)
        if(a[i]-a[i-1]==1 && a[i-1]-a[i-2]==1){
            cout<<"NO";
            return 0;
        }

    cout<<"YES";
    return 0;
}
