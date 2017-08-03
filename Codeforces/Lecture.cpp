#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    pair<string,string>a[m];

    for(int i=0;i<m;i++)
        cin>>a[i].first>>a[i].second;

    string out="";
    while(n--){
        string temp;
        cin>>temp;

        for(int i=0;i<m;i++)
            if(temp==a[i].first || temp==a[i].second){
                if(a[i].first.size()<=a[i].second.size())
                    out+=a[i].first+' ';
                else
                    out+=a[i].second+' ';

                break;
            }
    }

    cout<<out;

    return 0;
}
