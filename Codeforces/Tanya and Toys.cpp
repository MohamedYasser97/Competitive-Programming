#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    set<int>dup;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        dup.insert(temp);
    }

    int i=1,bought=0;
    set<int>boughtseq;

    while(m-i>=0){
        if(*(dup.begin())!=i){
            m-=i;
            ++bought;
            boughtseq.insert(i);
        }else{
            dup.set::erase(dup.begin());
        }
        ++i;
    }

    cout<<bought<<endl;
    for(set<int>::iterator it=boughtseq.begin();it!=boughtseq.end();it++)
        cout<<*it<<' ';

    return 0;
}
