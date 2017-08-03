#include <bits/stdc++.h>
using namespace std;

int main()
{
    string in;
    cin>>in;
    bool ab=false,ba=false;int i;
    for(i=0;i<in.size()-1;i++)if(in[i]=='A'&&in[i+1]=='B'){ab=true;break;}
    for(i=i+2;i<in.size()-1;i++)if(in[i]=='B'&&in[i+1]=='A'){ba=true;break;}
    if(ab&&ba){cout<<"YES";return 0;}
    ab=false;ba=false;
    for(i=0;i<in.size()-1;i++)if(in[i]=='B'&&in[i+1]=='A'){ba=true;break;}
    for(i=i+2;i<in.size()-1;i++)if(in[i]=='A'&&in[i+1]=='B'){ab=true;break;}
    if(ab&&ba)cout<<"YES";else cout<<"NO";
    return 0;
}
