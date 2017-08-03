#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n][2],freqh[100001]={0};
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
        freqh[a[i][0]]++;
    }

    for(int i=0;i<n;i++)
        cout<<n-1+freqh[a[i][1]]<<' '<<n-1-freqh[a[i][1]]<<endl;

    return 0;
}
