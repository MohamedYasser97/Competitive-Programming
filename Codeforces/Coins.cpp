#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,char>a[3]={{0,'A'},{0,'B'},{0,'C'}};
    string temp;
    for(int i=0;i<3;i++){
        cin>>temp;
        if(temp[1]=='<'){
            switch(temp[2]){
                case 'A':a[0].first++;break;
                case 'B':a[1].first++;break;
                case 'C':a[2].first++;break;
            }
        }else{
            switch(temp[0]){
                case 'A':a[0].first++;break;
                case 'B':a[1].first++;break;
                case 'C':a[2].first++;break;
            }
        }
    }

    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
            if(a[i].first>a[j].first)
                swap(a[i],a[j]);

    if(a[0].first!=0 || a[1].first!=1 || a[2].first!=2)
        cout<<"Impossible";
    else
        cout<<a[0].second<<a[1].second<<a[2].second;

    return 0;
}
