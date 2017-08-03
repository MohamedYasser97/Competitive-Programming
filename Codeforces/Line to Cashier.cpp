#include <iostream>
using namespace std;

int main()
{
    int n,mint=99999999,trash;
    cin>>n;

    pair<int,int>a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=0;
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<a[i].first;j++){
            cin>>trash;
            a[i].second+=trash;
        }
    }

    for(int i=0;i<n;i++)
        if((a[i].first*15 + a[i].second*5)<mint)
            mint = a[i].first*15 + a[i].second*5;

    cout<<mint;

    return 0;
}
