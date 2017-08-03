#include <bits/stdc++.h>
using namespace std;

int bea[1000003];
int dp[1000003];

int main()
{
    int n,maxd=-222;
    cin>>n;

    for(int i=0;i<n;i++){
        int dump;
        cin>>dump;
        cin>>bea[dump];
    }

    if(bea[0]>0)
        dp[0]=1;

    for(int i=1;i<=1000003;i++){
        if(bea[i]==0)
            dp[i]=dp[i-1];
        else if(bea[i]>=i)
                dp[i]=1;
            else
                dp[i]=dp[i-bea[i]-1] + 1;

        maxd=max(maxd,dp[i]);
    }

    cout<<n-maxd;
    return 0;
}
