#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;

    for(int i=0;i<n.size();i++){
        if(i==0 && n[0]=='9'){
            cout<<n[i];continue;}
        if(n[i]>'4')
            n[i]=(9-(n[i]-'0'))+'0';

        cout<<n[i];
    }
    return 0;
}
