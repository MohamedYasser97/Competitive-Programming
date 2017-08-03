#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,pos=1;
    pair<int,string>chs(0,"chest");
    pair<int,string>bcp(0,"biceps");
    pair<int,string>bck(0,"back");
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(pos==1)
            chs.first+=a[i];
        else if(pos==2)
            bcp.first+=a[i];
        else if(pos==3)
            bck.first+=a[i];

        pos++;
        if(pos>3)
            pos=1;
    }

    int maxp=max(max(chs.first,bcp.first),bck.first);

    if(maxp==chs.first)
        cout<<chs.second;
    else if(maxp==bcp.first)
        cout<<bcp.second;
    else
        cout<<bck.second;

    return 0;
}
