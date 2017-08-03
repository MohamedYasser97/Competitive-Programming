#include <bits/stdc++.h>//if 1 max is not there,there can only be 1 other max so precalculate 2 max values
using namespace std;

int main()
{
    int n,totw=0,maxhind=0;
    scanf("%d",&n);
    pair<int,int>a[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d %d",&a[i].first,&a[i].second);
        totw+=a[i].first;
        if(a[maxhind].second<a[i].second)
            maxhind=i;
    }

    a[0].second=-1;
    int maxhind2=0;
    for(int i=1;i<=n;i++)
        if(maxhind!=i&&a[i].second>a[maxhind2].second)
            maxhind2=i;

    for(int i=1;i<=n;i++)
        if(i==maxhind)
            printf("%d ",a[maxhind2].second*(totw-a[i].first));
        else
            printf("%d ",a[maxhind].second*(totw-a[i].first));

    return 0;
}
