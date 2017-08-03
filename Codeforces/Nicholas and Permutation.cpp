#include <iostream>
using namespace std;

int find_one(int a[],int n)
{
    for(int i=0;i<n;i++)
        if(a[i]==1)
            return i;
}

int find_n(int a[],int n)
{
    for(int i=0;i<n;i++)
        if(a[i]==n)
            return i;
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int l=min(find_one(a,n) , find_n(a,n))+1 , r=max(find_one(a,n) , find_n(a,n))+1;

    if(n-r>=l-1)
        cout<<n-l;
    else
    if(n-r<l-1)
        cout<<r-1;
    else
    if(l==1 && r==n)
        cout<<l-r-1;

    return 0;
}
