#include <bits/stdc++.h>
using namespace std;
int dp[100005],sumdp[100005];

int main()
{
    string s;
    cin>>s;
    sumdp[s.size()-1]=dp[s.size()-1];
    for(int i=s.size()-2;i>=0;i--){if(s[i]==s[i+1])dp[i]=1;sumdp[i]=sumdp[i+1]+dp[i];}
    int q,l,r;cin>>q;
    while(q--){cin>>l>>r;cout<<sumdp[l-1]-sumdp[r-1]<<endl;}
    return 0;
}
