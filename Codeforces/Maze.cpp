#include <bits/stdc++.h>
using namespace std;
int totdot,n,m,k,cnt;
char a[505][505];
bool vis[505][505];

void dfs(int i,int j)
{
    if(vis[i][j]||a[i][j]=='#'||cnt==totdot-k)
        return;

    vis[i][j]=true;
    ++cnt;

    if(j<m-1)dfs(i,j+1);
    if(j>0)dfs(i,j-1);
    if(i<n-1)dfs(i+1,j);
    if(i>0)dfs(i-1,j);

}

int main()
{
    cin>>n>>m>>k;

    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j){
            cin>>a[i][j];
            if(a[i][j]=='.')
                ++totdot;
        }

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            dfs(i,j);

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(!vis[i][j]&&a[i][j]=='.')
                cout<<'X';
            else
                cout<<a[i][j];

        }
        cout<<endl;
    }

    return 0;
}
