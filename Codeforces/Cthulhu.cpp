#include <bits/stdc++.h>
using namespace std;

bool visited[200];
vector<int>space[200];
int ivis;

void find_cthulhu(int curnode,int prevnode)
{
    if(visited[curnode])
        return;

    visited[curnode]=true;
    ivis++;

    for(int i=0;i<space[curnode].size();i++)
        if(space[curnode][i]!=prevnode)
            find_cthulhu(space[curnode][i],curnode);

}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        space[a-1].push_back(b-1);
        space[b-1].push_back(a-1);
    }

    find_cthulhu(0,-1);

    if(ivis<n || n!=m)
        cout<<"NO";
    else
        cout<<"FHTAGN!";

    return 0;
}
