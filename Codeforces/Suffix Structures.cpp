#include <bits/stdc++.h>
using namespace std;

int freq1[150],freq2[150];
bool checkpres(string s,string t)
{
    for(int i=0;i<s.size();i++)
        freq1[s[i]]++;

    for(int i=0;i<t.size();i++)
        freq2[t[i]]++;

    for(int i=0;i<t.size();i++)
        if(freq2[t[i]]>freq1[t[i]])
            return false;

    return true;
}

int main()
{
    string s,t;
    cin>>s>>t;

    if(t.size()>s.size() || !checkpres(s,t))
        cout<<"need tree";
    else{
        int cnt=0,idx=0;
        for(int i=0;i<s.size();i++){
            if(s.compare(i,t.size(),t)==0){
                cout<<"automaton";
                return 0;
            }

            if(s[i]==t[idx]){
                idx++;
                cnt++;
            }
            if(cnt==t.size()){
                cout<<"automaton";
                return 0;
            }
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t)
            cout<<"array";
        else
            cout<<"both";
    }

    return 0;
}
