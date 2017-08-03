#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxp=0,temp;
    cin>>n;

    while(n--){
        cin>>temp;
        maxp=max(maxp,temp);
    }

    cout<<maxp;

    return 0;
}
