#include <bits/stdc++.h>
using namespace std;//my first steps in dp too

int main()
{
    int n;
    cin>>n;

    int a[n],dp[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[i]=1;
    }

    for(int i=1;i<n;i++)
        if(a[i]>=a[i-1])
            dp[i]=dp[i-1]+1;

    int res=0;
    for(int i=0;i<n;i++)
        res=max(res,dp[i]);

    cout<<res;

    return 0;
}
