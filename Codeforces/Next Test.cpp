#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    bool flag=false;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=1;i<=4000;i++)
    {
        for(int j=0;j<n;j++)
            if(i==a[j])
                flag=true;

        if(flag==false)
        {cout<<i;return 0;}
        flag=false;
    }

    return 0;
}
