#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>&i,pair<int,int>&j){return i.second>j.second;}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<pair<int,int> >a(m);

    for(int i=0;i<m;i++){
        int j,k;
        cin>>j>>k;
        a.push_back(make_pair(j,k));
    }

    sort(a.begin(),a.end(),cmp);

    int res=0;
    for(int i=0;i<m;i++){
        if(n>=a[i].first){
            res+=a[i].first*a[i].second;
            n-=a[i].first;
        }else{
            res+=n*a[i].second;
            break;
        }
    }

    cout<<res;

    return 0;
}
