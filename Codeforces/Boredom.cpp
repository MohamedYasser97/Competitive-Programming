#include <bits/stdc++.h>
using namespace std;

long long int dp[1000005][2];//0 dont 1 do
long long int dump,freq[1000005];

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){cin>>dump;freq[dump]++;}

    for(int i=1;i<=100005;i++){
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
        dp[i][1]=dp[i-1][0]+i*freq[i];
    }

    cout<<max(dp[100005][0],dp[100005][1]);
    return 0;
}
