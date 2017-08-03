#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;

    vector<int>a;

    int val;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        a.push_back(val);
    }

    sort(a.begin(),a.end());
    a.pop_back();

    int maxsz=0;
    for(int i=0;i<a.size();i++)
        maxsz+=a[i];

    if(maxsz>s)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
