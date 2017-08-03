#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>g[102];
bool visited[102];
int finres;

void solve(int u,int v,int prevcol)
{
    visited[u]=true;
    if(u==v){
        finres++;
        return;
    }

    for(int i=0;i<g[u].size();i++)
        if(!visited[g[u][i].first]&&g[u][i].second==prevcol)
            solve(g[u][i].first,v,g[u][i].second);

    visited[u]=false;
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        g[a].push_back(make_pair(b,c));
        g[b].push_back(make_pair(a,c));
    }

    int q;
    cin>>q;

    while(q--){
        int u,v;
        cin>>u>>v;
        for(int i=1;i<=m;i++){
            solve(u,v,i);
            memset(visited,0,sizeof(visited));
        }
        cout<<finres<<endl;
        finres=0;
    }

    return 0;
}
