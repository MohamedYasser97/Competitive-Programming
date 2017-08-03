#include <bits/stdc++.h>
using namespace std;
int memo[1001][1001];

int solve(int a,int b)
{
    if(a<=0 || b<=0)
        return 0;

    if(memo[a][b]!=0)
        return memo[a][b];
    else
    return memo[a][b]=1+max(solve(a+1,b-2),solve(a-2,b+1));
}

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==1&&b==1)
        cout<<0;
    else
        cout<<solve(a,b);

    return 0;
}
