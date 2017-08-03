#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100001];
bool visited[100001],flag;

void dfs(int curnode,int t)
{
    visited[curnode]=true;
    if(curnode==t){
        flag=true;
        return;
    }

    for(int i=0;i<graph[curnode].size();i++)
        if(!visited[graph[curnode][i]])
            dfs(graph[curnode][i],t);
}

int main()
{
    int n,t;
    cin>>n>>t;
    for(int i=1;i<n;i++){
        int temp;cin>>temp;
        graph[i].push_back(i+temp);
    }
    dfs(1,t);
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
