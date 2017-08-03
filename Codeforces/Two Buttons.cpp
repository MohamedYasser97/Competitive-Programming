#include <bits/stdc++.h>
using namespace std;
bool visited[10004];
queue<pair<int,int>>q;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n==m){cout<<0;return 0;}else if(m<n){cout<<n-m;return 0;}

    pair<int,int>nn;nn.first=n;nn.second=0;
    q.push(nn);

    while(!q.empty())
    {
        pair<int,int>top=q.front();
        q.pop();

        if(top.first<1||top.first>1e4||visited[top.first])continue;
        visited[top.first]=true;
        if(2*top.first==m){cout<<top.second+1;return 0;}else{pair<int,int>t1;t1.first=2*top.first;t1.second=top.second+1;q.push(t1);}
        if(top.first-1==m){cout<<top.second+1;return 0;}else{pair<int,int>t2;t2.first=top.first-1;t2.second=top.second+1;q.push(t2);}

    }
    return 0;
}
