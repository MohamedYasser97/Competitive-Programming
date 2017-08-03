#include <iostream>

using namespace std;

int main()
{
    int n,d=0;
    cin>>n;

    char a[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(a[i][j+1]=='o' && j<n-1)    d++;
            if(a[i][j-1]=='o' && j>0)      d++;
            if(a[i+1][j]=='o' && i<n-1)    d++;
            if(a[i-1][j]=='o' && i>0)      d++;

            if(d%2!=0)
            {cout<<"NO"; return 0;}
            d=0;
        }

    cout<<"YES";

    return 0;
}
