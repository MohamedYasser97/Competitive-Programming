#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    if(s.size()&1){cout<<-1;return 0;}
    int u=0,l=0;
    for(int i=0;i<s.size();i++)
        switch(s[i]){case 'L':l++;break;case 'R':l--;break;case 'U':u++;break;case 'D':u--;break;}
    cout<<(abs(l)+abs(u))/2;
    return 0;
}
