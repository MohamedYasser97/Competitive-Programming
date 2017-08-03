#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int n;
    cin>>n;

    pair<long long int , long long int>lap[n]; //FIRST TIME PAIR

    for(int i=0;i<n;i++)
        cin>>lap[i].first>>lap[i].second;

    sort(lap,lap+n);    //FIRST TIME SORT FUNCTION...begin(lap) and end(lap) didn't work

    for(int i=0;i<n-1;i++)
        if(lap[i].first<lap[i+1].first && lap[i].second>lap[i+1].second)
        {cout<<"Happy Alex"; return 0;}

    cout<<"Poor Alex";
    return 0;
}
