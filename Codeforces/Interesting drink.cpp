#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }

    sort(a.begin(),a.end());

    int q;
    cin>>q;
    while(q--){
        cin>>temp;
        cout<<upper_bound(a.begin(),a.end(),temp)-a.begin()<<endl;
    }

    return 0;
}
