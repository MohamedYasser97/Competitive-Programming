#include <bits/stdc++.h>
using namespace std;

int a,b,c,n,memo[99999];

int solve(int n)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1e9;

    if(memo[n]!=0)
        return memo[n];
    else
        return memo[n]=1+max(solve(n-a),max(solve(n-b),solve(n-c)));
}

int main()
{
    cin>>n>>a>>b>>c;

    cout<<solve(n);

    return 0;
}
