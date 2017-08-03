#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

bool islit(int a[],int n,double d)
{
    for(int i=0;i<n-1;i++)
        if((double)a[i]+d < (double)a[i+1]-d)
            return false;

    return true;
}

int main()
{
    int n,l;
    cin>>n>>l;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    int mindist=a[0],maxdist=a[n-1]-a[0];

    for(int i=1;i<n;i++)
        if(a[i]-a[i-1]<mindist)
            mindist=a[i]-a[i-1];

    double low=mindist,high=maxdist;
    while(low<=high){
        double mid=(low+high)/2;

        if(!islit(a,n,mid) && islit(a,n,mid+0.000000001)){

            printf("%.10f",mid+0.000000001);
            break;

        }else
        if(islit(a,n,mid) && islit(a,n,mid+0.000000001))
            high=mid-0.000000001;
        else
            low=mid+0.000000002;
    }

    return 0;
}
