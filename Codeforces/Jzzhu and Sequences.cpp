#include <iostream>
using namespace std;

int main()
{
    int refnum[7];

    int x,y,n,mod=1000000007;

    cin>>x>>y>>n;

    refnum[0]=-y+x;refnum[1]=x;refnum[2]=y;refnum[3]=y-x;refnum[4]=-x;refnum[5]=-y;

    if(refnum[n%6]>=0)
        cout<<refnum[n%6]%mod;
    else
        cout<<(mod+refnum[n%6]%mod) % mod ;

    return 0;
}
