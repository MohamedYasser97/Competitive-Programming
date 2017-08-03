#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int b[m][n],a[m][n],bn[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            cin>>b[i][j];
            a[i][j]=1;
            bn[i][j]=0;
        }

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            if(b[i][j]==0){
                for(int k=0;k<m;k++)
                    a[k][j]=0;
                for(int k=0;k<n;k++)
                    a[i][k]=0;
            }
        }

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==1){
                for(int k=0;k<m;k++)
                    bn[k][j]=1;
                for(int k=0;k<n;k++)
                    bn[i][k]=1;
            }

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(bn[i][j]!=b[i][j]){
                cout<<"NO";
                return 0;
            }

    cout<<"YES"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }

    return 0;
}
