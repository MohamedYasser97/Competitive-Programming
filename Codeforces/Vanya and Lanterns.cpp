#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    double dis=0;
    for(int i=1;i<n;i++)
        if(a[i]-a[i-1]>dis)
            dis=a[i]-a[i-1];

    printf("%.10f",max(dis/2,(double)max(a[0],l-a[n-1])));

    return 0;
}
