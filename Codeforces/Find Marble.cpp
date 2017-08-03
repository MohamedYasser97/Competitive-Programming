#include <bits/stdc++.h>
#define  itr map<int,int>::const_iterator
using namespace std;

int main()
{
    map<int,int>a;
    set<int>log;
    int n,s,t;
    cin>>n>>s>>t;

    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        a[i]=temp;
        log.insert(i);
    }

    int res=0;
    itr itf=a.map::find(t);
    for(itr it=a.map::find(s);it!=itf;){
        if(it->first==it->second || log.set::find(it->first)==log.end()){
            cout<<-1;
            return 0;
        }

        log.erase(it->first);
        it=a.map::find(it->second);
        res++;
    }

    cout<<res;

    return 0;
}
