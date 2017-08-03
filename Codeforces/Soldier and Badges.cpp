#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n],afreq[2*n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        afreq[a[i]]++;
    }

    int res=0;
    for(int i=0;i<2*n;i++)
    {
        if(afreq[i]>1)
        {
            res+=afreq[i]-1;
            afreq[i+1]+=afreq[i]-1;
        }
    }

    cout<<res;

    return 0;
}
