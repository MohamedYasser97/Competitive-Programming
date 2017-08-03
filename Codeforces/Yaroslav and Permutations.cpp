#include <iostream>
using namespace std;

bool cmp(int a,int b){return a>b;}
int main()
{
    int n;
    cin>>n;

    int a[n],afreq[1100]={0},maxfreq=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        afreq[a[i]]++;
        maxfreq=max(maxfreq,afreq[a[i]]);
    }

    if(n-maxfreq>=maxfreq-1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
