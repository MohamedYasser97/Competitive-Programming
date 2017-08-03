#include <bits/stdc++.h>//Why do we fall?
using namespace std;//To get back up again.
long long int dp1[200002],dp2[200002];

long long int getblocks(long long int sum)
{
    return (sum*(1+sum))/2;
}

int main()
{
    long long int r,g;
    cin>>r>>g;

    long long int h=1;
    while(getblocks(h)<=r+g)
        h++;
        h--;

    dp1[0]=1;
    for(long long int i=1;i<=h;i++){
        for(long long int j=i;j<=min(r,getblocks(i));j++)
            dp2[j]+=(dp1[j-i] % 1000000007);

        for(long long int j=max((long long int)0,getblocks(i)-g);j<=min(r,getblocks(i-1));j++)
            dp2[j]+=(dp1[j] % 1000000007);

        for(int j=0;j<=r;j++)
            dp1[j]=dp2[j],dp2[j]=0;
    }

    long long int res=0;
    for(int i=0;i<=r;i++)
        res+=(dp1[i]% 1000000007);

    cout<<res % 1000000007;

    return 0;
}
