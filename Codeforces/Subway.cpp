#include <bits/stdc++.h>//first detect the ring road(simple cycle) then get the depth of each node from the ring roots
using namespace std;
vector<int>graph[3003];
set<int>ringnodes;
bool visited[3003];
int parent[3003],dist[3003];

void find_ringroad(int curnode,int prevnode)
{
    visited[curnode]=true;
    parent[curnode]=prevnode;

    for(int i=0;i<graph[curnode].size();i++)
        if(!visited[graph[curnode][i]])
            find_ringroad(graph[curnode][i],curnode);
        else
        if(graph[curnode][i]!=prevnode&&parent[curnode]!=graph[curnode][i]){
            int tempnode=curnode;

            while(tempnode!=graph[curnode][i]){
                ringnodes.insert(tempnode);
                tempnode=parent[tempnode];
            }
            ringnodes.insert(graph[curnode][i]);
        }

    visited[curnode]=false;

}

void get_distances(int curnode,int d)
{
    visited[curnode]=true;
    dist[curnode]=d;

    for(int i=0;i<graph[curnode].size();i++)
        if(!visited[graph[curnode][i]]&&!ringnodes.set::count(graph[curnode][i]))
            get_distances(graph[curnode][i],d+1);
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    find_ringroad(1,-1);
    memset(visited,0,sizeof(visited));

    for(int i=1;i<=n;i++)
        if(ringnodes.set::count(i))
            get_distances(i,0);

    for(int i=1;i<=n;i++)
        cout<<dist[i]<<' ';

    return 0;
}
