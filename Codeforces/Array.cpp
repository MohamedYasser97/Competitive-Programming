#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n],izer;
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    for(int i=0;i<n;i++)
        if(a[i]==0)
            izer=i;
        else if(a[i]>0)
            break;

    if(izer==n-1)
    {
        cout<<1<<' '<<a[0]<<endl;

        cout<<2<<' '<<a[1]<<' '<<a[2]<<endl;

        cout<<izer-2<<' ';
        for(int i=3;i<=izer;i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    else
    {
        cout<<1<<' '<<a[0]<<endl;

        cout<<n-izer-1<<' ';
        for(int i=izer+1;i<n;i++)
            cout<<a[i]<<' ';

            cout<<endl<<izer<<' ';
        for(int i=1;i<=izer;i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }

    return 0;
}
