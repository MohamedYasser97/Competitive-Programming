#include <iostream>
using namespace std;

int main()
{
    int n,k,m=0;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(j==m)
                cout<<k<<' ';
            else
                cout<<0<<' ';

        cout<<endl;
        m++;
    }

    return 0;
}
