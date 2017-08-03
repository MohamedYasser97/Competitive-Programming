#include <iostream>

using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;

    int cnd=0,maxd=0;
    string a;

    while(d--)
    {
        int x=n;
        bool flag=false;

        cin>>a;

        for(int i=0;i<a.length();i++)
            if(a[i]=='0'){flag=true;break;}

        if(flag)
            cnd++;
        else
            cnd=0;

        if(cnd>maxd)
            maxd=cnd;

        flag=false;
    }

    cout<<maxd;

    return 0;
}
