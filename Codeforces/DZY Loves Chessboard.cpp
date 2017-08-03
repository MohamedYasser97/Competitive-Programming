#include <iostream>

using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;
    char a[n][m];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];

    char prnt='B';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='-')
                cout<<'-';
            else
                cout<<prnt;

            if(prnt=='B')
                prnt='W';
            else
                prnt='B';

            if(j==m-1)
                if(m%2==0)
                    if(prnt=='B')
                        prnt='W';
                    else
                        prnt='B';
        }

        cout<<endl;
    }

    return 0;
}
