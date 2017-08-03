#include <bits/stdc++.h>
using namespace std;
struct edge{int a,b,c;};
vector<edge>forest;
set<int>bake;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        edge tempedge;
        cin>>tempedge.a>>tempedge.b>>tempedge.c;
        forest.push_back(tempedge);
    }

    for(int i=0;i<k;i++){
        int temp;
        cin>>temp;
        bake.insert(temp);
    }

    int res=1e9+5;
    for(int i=0;i<m;i++)
        if((bake.count(forest[i].a)&&!bake.count(forest[i].b))
          ||(bake.count(forest[i].b)&&!bake.count(forest[i].a)))
            res=min(res,forest[i].c);

    if(res==1e9+5)
        cout<<-1;
    else
        cout<<res;

    return 0;
}
