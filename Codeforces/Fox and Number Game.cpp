#include <iostream>     //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#include <algorithm>
using namespace std;
bool cmp(int a, int b){return a>b;}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int i=0;
    while(1)
    {
        sort(a,a+n,cmp);

        if(a[i]>a[i+1])
            {a[i]-=a[i+1]; i=0;}
        else
            i++;
    }

    int minsum=0;
    for(int i=0;i<n;i++)
        minsum+=a[i];

    cout<<minsum;

    return 0;
}
