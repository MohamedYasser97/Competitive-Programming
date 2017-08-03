#include <bits/stdc++.h>
using namespace std;

long long int danger=1;
bool visited[100];
vector<int>graph[100];

void dfs(int curnode,int prevnode)
{
    visited[curnode]=true;

    for(int i=0;i<graph[curnode].size();i++)
        if(!visited[graph[curnode][i]] && graph[curnode][i]!=prevnode){
            danger*=2;
            dfs(graph[curnode][i],curnode);
        }


}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=1;i<=n;i++)
        dfs(i,-1);

    cout<<danger;

    return 0;
}
