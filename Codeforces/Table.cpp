#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int temp;
    bool flag=false;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>temp;
            if(temp==1 && (i==0 || i==n-1 || j==0 || j==m-1))
               flag=true;
        }

    if(flag)
        cout<<2;
    else
        cout<<4;

    return 0;
}
