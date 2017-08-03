#include <bits/stdc++.h>
using namespace std;
vector<int>graph[2001];
bool visited[2001];
int maxdep;

void dfs(int curnode,int dep)
{
    visited[curnode]=true;
    maxdep=max(maxdep,dep);

    for(int i=0;i<graph[curnode].size();i++)
        if(!visited[graph[curnode][i]])
            dfs(graph[curnode][i],dep+1);
}

int main()
{
    int n,temp;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>temp;
        if(temp!=-1)
            graph[temp].push_back(i);
    }

    for(int i=1;i<=n;i++){
        memset(visited,0,sizeof(visited));
        dfs(i,0);
    }

    cout<<maxdep+1;
    return 0;
}
