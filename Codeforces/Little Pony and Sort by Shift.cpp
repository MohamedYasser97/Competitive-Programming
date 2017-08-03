#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n+100];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int cnt=0;
    bool displace=false;

    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            if(!displace)
            {
                cnt++;
                displace=true;
            }
            else
                {cout<<-1; return 0;}
        }
        else if(displace)
                cnt++;
    }

    if(a[n-1]>a[0] && displace)
        cout<<-1;
    else
        cout<<cnt;

    return 0;

}
