#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    char a[n+1][n+1];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    char dia=a[0][0],oth[0][1]; if(a[0][0]==a[0][1]){cout<<"NO"; return 0;}

    for(int i=0;i<n;i++)
        if(a[i][i] != dia)
            {cout<<"NO"; return 0;}

    for(int i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        if(a[i][j] != dia)
            {cout<<"NO"; return 0;}

        a[i][j]=1;
    }

    for(int i=0;i<n;i++)
        a[i][i]=1;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1)
                continue;
            else
            if(a[i][j]!=a[0][1])
                {cout<<"NO"; return 0;}
        }

    cout<<"YES";
    return 0;
}
