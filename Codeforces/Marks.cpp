#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<string>a(n);
    int suc[n]={0};

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int j=0;j<m;j++)
    {
        char bsuc='0';

        for(int i=0;i<n;i++)
            if(a[i][j]>bsuc)
                bsuc=a[i][j];

        for(int i=0;i<n;i++)
            if(a[i][j]==bsuc)
                suc[i]=1;
    }

    int sucsum=0;
    for(int i=0;i<n;i++)
        sucsum+=suc[i];

    cout<<sucsum;

    return 0;
}
