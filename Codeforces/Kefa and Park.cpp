#include <bits/stdc++.h>
using namespace std;

int res=0,m;
vector<int> tree[100001];
int hascats[100001];

void dfs(int curnode,int curcat,int prevn)
{
    if(hascats[curnode])
        curcat++;
    else
        curcat=0;

    if(curcat>m)
        return;

    bool leaflag=true;
    for(int i=0;i<tree[curnode].size();i++)
        if(tree[curnode][i]!=prevn){
            leaflag=false;
            dfs(tree[curnode][i],curcat,curnode);
        }

    if(leaflag)
        res++;
}

int main()
{
    int n;
    cin>>n>>m;

    for(int i=0;i<n;i++)
        cin>>hascats[i];

    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        tree[a-1].push_back(b-1);
        tree[b-1].push_back(a-1);
    }

    dfs(0,0,-1);

    cout<<res;

    return 0;

}
