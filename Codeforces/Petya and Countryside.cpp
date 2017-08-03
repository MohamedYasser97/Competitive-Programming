#include <iostream>
using namespace std;

int chkr(int index, int a[],int n)
{
    int wet=1;

    if(index==n-1)
        return 1;

    for(int i=index;i<n;i++)
    {
        if(a[i]>=a[i+1])
            wet++;
        else
            break;
    }

    return wet;
}

int chkl(int index, int a[], int n)
{
    int wet=0;

    if(index==0)
        return 0;

    for(int i=index;i>0;i--)
    {
        if(a[i]>=a[i-1])
            wet++;
        else
            break;
    }

    return wet;
}

int main()
{
    int n,maxwet=1;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
        if(chkr(i,a,n) + chkl(i,a,n) > maxwet)
            maxwet=chkr(i,a,n)+chkl(i,a,n);

    cout<<maxwet;

    return 0;
}
