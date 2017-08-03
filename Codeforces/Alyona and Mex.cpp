#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    long long int mex=1;
    for(int i=0;i<n;i++)
        if(a[i]>=mex)
            mex++;


    cout<<mex;
    return 0;
}
