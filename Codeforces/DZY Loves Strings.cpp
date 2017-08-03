#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int k;
    vector<int>a;
    cin>>k;

    for(int i=0;i<26;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }

    int val=0,t=1;
    for(int i=0;i<s.length();i++)
    {
        val+=a[s[i]-97] * t;
        t++;
    }

    while(k--)
    {
        val+=(*max_element(a.begin(),a.end())) * t; //max_element() is an iterator which returns value and place so we must dereference it!
        t++;
    }

    cout<<val;
    return 0;
}
