#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            bool flag=false;
            for(int k=0;k<n;k++)
                if(a[i][j]==a[k][j] && k!=i){
                    flag=true;
                    break;
                }

            if(!flag)
                for(int k=0;k<m;k++)
                if(a[i][j]==a[i][k] && k!=j){
                    flag=true;
                    break;
                }

            if(!flag)
                cout<<a[i][j];
        }

    return 0;
}
