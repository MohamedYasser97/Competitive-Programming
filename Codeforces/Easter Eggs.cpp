#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a="ROYGBIV";
    string s[]={"","G","GB","YGB","YGBI","OYGBI","OYGBIV"};

    for(int i=0;i<n/7;i++)
        cout<<a;

    cout<<s[n%7];

    return 0;
}
