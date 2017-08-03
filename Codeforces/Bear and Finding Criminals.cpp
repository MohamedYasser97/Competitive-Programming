#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,mypos;
    cin>>n>>mypos;
    mypos--;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int lmt=min(n-mypos-1,mypos),res=(a[mypos]==1)?1:0;

    for(int i=1;i<=lmt;i++)
        if(a[mypos+i] + a[mypos-i] == 2)
            res+=2;

    for(int i=0;i<mypos-lmt;i++)
        res+=a[i];
    for(int i=mypos+lmt+1;i<n;i++)
        res+=a[i];

    cout<<res;

    return 0;
}
