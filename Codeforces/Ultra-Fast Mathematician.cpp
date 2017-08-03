#include <bits/stdc++.h>//they said there was gonna be dp in it :(
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)b[i]=((a[i]-'0')^(b[i]-'0'))+'0';
    cout<<b;
    return 0;
}
