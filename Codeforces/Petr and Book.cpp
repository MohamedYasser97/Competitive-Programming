#include <iostream>

using namespace std;

int main()
{
    int n,a[7];
    cin>>n;

    for(int i=0;i<7;i++)
        cin>>a[i];

    int i=0;
    while(n>0)
    {
        n-=a[i];

        if(i==6 && n>0)
            i=0;
        else
            i++;
    }

    cout<<i;

    return 0;
}
