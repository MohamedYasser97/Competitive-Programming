#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int b[m],norg=n;
    for(int i=0;i<m;i++)
        cin>>b[i];

    int l[n]={0};

    for(int i=0;i<m;i++)
        for(int j=1;j<=n;j++)
        {
            if(b[i]<=j)
            {
                for(int k=j;k<=n;k++)
                    l[j-1]=b[i];

                n=j;
            }
        }

    for(int i=0;i<norg;i++)
    {
        if(l[i]==0)
            l[i]=l[i-1];

        cout<<l[i]<<' ';
    }

    return 0;
}
