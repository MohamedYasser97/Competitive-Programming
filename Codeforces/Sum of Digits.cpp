#include <bits/stdc++.h>
using namespace std;

int sod(int n)
{
    if(n==0)
        return 0;

    return n%10+sod(n/10);
}

int main()
{
    string n;
    cin>>n;

    if(n.size()==1){
        cout<<0;
        return 0;
    }

    int res=1,totsum=0;
    for(int i=0;i<n.size();i++)
        totsum+=n[i]-'0';

    while(totsum>9){
        totsum=sod(totsum);
        res++;
    }

    cout<<res;

    return 0;
}
