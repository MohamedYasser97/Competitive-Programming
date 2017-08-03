#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int maxdifp1=0,difp2,a[n],pos1,pos2;
    cin>>a[0];

    for(int i=1;i<n;i++)
    {
        cin>>a[i];

        if(a[i]-a[i-1] > maxdifp1)
        {
            maxdifp1=a[i]-a[i-1];
            pos1=i;
        }
    }

    difp2=a[2]-a[0];
    for(int i=3;i<n;i++)
        if(a[i]-a[i-2] < difp2)
        {
            difp2=a[i]-a[i-2];
            pos2=i;
        }

    if(pos2==pos1+1 || pos2==pos1+2 || difp2>maxdifp1)
        cout<<difp2;
    else
        cout<<maxdifp1;


    return 0;
}
