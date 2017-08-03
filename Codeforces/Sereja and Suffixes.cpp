#include <bits/stdc++.h>
using namespace std;
int freq[100004],dp[100004];

int main()
{
    int n,m,q;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    freq[a[n-1]]++;
    for(int i=n-2;i>=0;i--){if(freq[a[i]]!=0)dp[i]+=dp[i+1];else dp[i]+=dp[i+1]+1;freq[a[i]]++;}
    while(m--){cin>>q;cout<<dp[q-1]+1<<endl;}
    return 0;
}
